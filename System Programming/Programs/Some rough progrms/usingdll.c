#include <iostream>
#include <windows.h>

typedef int (*AddFunction)(int, int);

int main() {
    HMODULE dllHandle = LoadLibrary("libaddingNumber.dll");
    if (dllHandle == nullptr) {
        std::cerr << "Error loading DLL." << std::endl;
        return 1;
    }

    AddFunction addFunction = reinterpret_cast<AddFunction>(GetProcAddress(dllHandle, "add_two_numbers"));
    if (addFunction == nullptr) {
        std::cerr << "Error getting function from DLL." << std::endl;
        FreeLibrary(dllHandle);
        return 1;
    }

int result = addFunction(10, 5);
    std::cout << "Result: " << result << std::endl;

    FreeLibrary(dllHandle);

    return 0;
}
