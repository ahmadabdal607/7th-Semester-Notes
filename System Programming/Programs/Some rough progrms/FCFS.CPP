#include <iostream>
#include <vector>

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
};

void firstComeFirstServe(std::vector<Process> &processes) {
    int currentTime = 0;
    int totalTurnaroundTime = 0;
    int totalWaitingTime = 0;

    std::cout << "Process\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time\n";

    for (const Process &p : processes) {
        int completionTime = std::max(currentTime, p.arrivalTime) + p.burstTime;
        int turnaroundTime = completionTime - p.arrivalTime;
        int waitingTime = turnaroundTime - p.burstTime;

        totalTurnaroundTime += turnaroundTime;
        totalWaitingTime += waitingTime;

        std::cout << p.id << "\t" << p.arrivalTime << "\t\t" << p.burstTime << "\t\t" << completionTime << "\t\t" << turnaroundTime << "\t\t" << waitingTime << "\n";

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

    firstComeFirstServe(processes)`;

    return 0;
}
