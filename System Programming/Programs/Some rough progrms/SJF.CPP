#include <iostream>
#include <vector>
#include <algorithm>

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
};

bool compareByBurstTime(const Process &a, const Process &b) {
    return a.burstTime < b.burstTime;
}

void shortestJobFirst(std::vector<Process> &processes) {
    std::sort(processes.begin(), processes.end(), compareByBurstTime);
    int currentTime = 0;

    std::cout << "Process\tArrival Time\tBurst Time\tCompletion Time\n";

    for (const Process &p : processes) {
        int completionTime = currentTime + p.burstTime;
        std::cout << p.id << "\t" << p.arrivalTime << "\t\t" << p.burstTime << "\t\t" << completionTime << "\n";
        currentTime = completionTime;
    }
}

int main() {
    std::vector<Process> processes = {
        {1, 0, 6},
        {2, 1, 8},
        {3, 2, 7},
        {4, 3, 3}
    };

    shortestJobFirst(processes);

    return 0;
}
