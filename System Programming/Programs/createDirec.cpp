#include <windows.h>
#include <iostream>
using namespace std;

int main() {
    BOOL bDir;
    bDir = CreateDirectory("C:\\Users\\Izzyy\\Desktop\\System Programming\\Dir2", NULL);

    if (bDir == false) {
        cout << "CreateDirectory Failed & Error NO - " << GetLastError() << endl;
    } else {
        cout << "CreateDirectory Success" << endl;
    }

    system("PAUSE");

    return 0;
}
