#include <windows.h>
#include <iostream>
using namespace std;

int main() {
    int bFile;
    bFile = rename("C:\\Users\\Izzyy\\Desktop\\System Programming\\Dir1\\3.txt", "C:\\Users\\Izzyy\\Desktop\\System Programming\\Dir1\\1.txt");

    if (bFile == 0) {
        cout << "File Renamed Successfully" << endl;
    } else {
        cout << "File does not exist or rename failed - Error Code: " << errno << endl;
    }

    system("PAUSE");

    return 0;
}

