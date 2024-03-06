#include <iostream>

extern "C" __declspec(dllexport) int add_two_numbers(int a, int b) {
    return a + b;
}
