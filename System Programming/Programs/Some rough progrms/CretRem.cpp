#include <windows.h>
#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>

using namespace std;

int main() {
    BOOL bDirCreate, bDirRemove;
    const string directoryPath = "C:\\Users\\Izzyy\\Desktop\\System Programming\\Dir2";

    bDirCreate = CreateDirectory(directoryPath.c_str(), NULL);

    if (bDirCreate == false) {
        cout << "CreateDirectory Failed & Error NO - " << GetLastError() << endl;
    } else {
        cout << "CreateDirectory Success" << endl;

        int sleepDuration = rand() % 5 + 1;  // Generate a random sleep duration between 1 and 5 seconds
        cout << "Waiting for " << sleepDuration << " seconds..." << endl;

        // Sleep for the specified duration
        this_thread::sleep_for(chrono::seconds(sleepDuration));

        bDirRemove = RemoveDirectory(directoryPath.c_str());

        if (bDirRemove == false) {
            cout << "RemoveDirectory Failed & Error NO - " << GetLastError() << endl;
        } else {
            cout << "RemoveDirectory Success" << endl;
        }
    }

    system("PAUSE");

    return 0;
}
