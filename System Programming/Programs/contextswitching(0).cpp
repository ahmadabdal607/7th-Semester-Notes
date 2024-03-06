#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>

void openNotepad() {
    system("start notepad.exe");
}

void openCalculator() {
    //system("start calc.exe");
    system("start calc.exe");
}

int main() {
    // Seed for random number generation
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Launch Notepad in a separate thread
    std::thread notepadThread(openNotepad);

    // Sleep for a random duration to simulate context switching
    int sleepDuration = std::rand() % 5 + 1;
    std::this_thread::sleep_for(std::chrono::seconds(sleepDuration));

    // Launch Calculator in the main thread
    openCalculator();

    // Wait for the Notepad thread to finish
    notepadThread.join();

    return 0;
}
