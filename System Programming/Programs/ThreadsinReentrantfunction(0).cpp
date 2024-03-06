#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx; // Mutex for synchronization

void reentrantFunction(int threadId) {
    mtx.lock(); // Lock the mutex to ensure exclusive access
    std::cout << "Thread " << threadId << " is inside the reentrant function." << std::endl;

    // Simulate some work
    for (int i = 0; i < 3; ++i) {
        std::cout << "Thread " << threadId << " is working..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "Thread " << threadId << " is leaving the reentrant function." << std::endl;
    mtx.unlock(); // Unlock the mutex when done
}

int main() {
    std::thread t1(reentrantFunction, 1);
    std::thread t2(reentrantFunction, 2);

    t1.join();
    t2.join();

    return 0;
}
