#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx; // Mutex for synchronization
int globalVariable = 0;

void incrementGlobalVariable(int threadId) {
    for (int i = 0; i < 5; ++i) {
        mtx.lock(); // Lock the mutex to protect the globalVariable
        globalVariable++; // Modify the shared global variable
        std::cout << "Thread " << threadId << " incremented globalVariable to " << globalVariable << std::endl;
        mtx.unlock(); // Unlock the mutex
    }
}

int main() {
    std::thread t1(incrementGlobalVariable, 1);
    std::thread t2(incrementGlobalVariable, 2);

    t1.join();
    t2.join();

    std::cout << "Final value of globalVariable: " << globalVariable << std::endl;

    return 0;
}
