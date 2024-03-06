#include <windows.h>
#include <iostream>
using namespace std;

int main() {
    BOOL bFile;
    bFile = CopyFile("C:\\Users\\Izzyy\\Desktop\\System Programming\\Dir1\\oldfile.txt", "C:\\Users\\Izzyy\\Desktop\\System Programming\\oldfile.txt",TRUE);

    if (bFile == false) {
        cout << "FileCopey Fail & Error NO - " << GetLastError() << endl;
    } else {
        cout << "File Copied" << endl;
    }

    system("PAUSE");

    return 0;
}
