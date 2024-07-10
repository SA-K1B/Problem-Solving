#include <iostream>
#include <vector>
#include <algorithm>

struct Process {
    int pid;
    int arrivalTime;
    int burstTime;
    int startTime;
    int finishTime;
    int waitingTime;
    int turnaroundTime;
    int remainingTime;
};

bool compareArrivalTime(const Process& p1, const Process& p2) {
    return p1.arrivalTime < p2.arrivalTime;
}

bool compareBurstTime(const Process& p1, const Process& p2) {
    return p1.burstTime < p2.burstTime;
}

void sjfPreemptive(std::vector<Process>& processes) {
    int n = processes.size();
    int currentTime = 0;
    int completedProcesses = 0;
    std::vector<Process> readyQueue;
    std::vector<bool> completed(n, false);

    while (completedProcesses < n) {
        // Find processes that have arrived and are not completed
        for (int i = 0; i < n; ++i) {
            if (!completed[i] && processes[i].arrivalTime <= currentTime) {
                readyQueue.push_back(processes[i]);
                completed[i] = true;
            }
        }

        // Sort the ready queue based on burst time
        std::sort(readyQueue.begin(), readyQueue.end(), compareBurstTime);

        // Execute the process with the shortest burst time
        if (!readyQueue.empty()) {
            Process& currentProcess = readyQueue.front();

            if (currentProcess.remainingTime == currentProcess.burstTime) {
                // Set the start time for the process (first time it gets CPU)
                currentProcess.startTime = currentTime;
            }

            // Execute the process for 1 unit of time
            currentProcess.remainingTime--;
            currentTime++;

            if (currentProcess.remainingTime == 0) {
                // Process has finished execution
                currentProcess.finishTime = currentTime;
                currentProcess.turnaroundTime = currentProcess.finishTime - currentProcess.arrivalTime;
                currentProcess.waitingTime = currentProcess.turnaroundTime - currentProcess.burstTime;
                completedProcesses++;
                readyQueue.erase(readyQueue.begin());
            }
        } else {
            currentTime++;
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the number of processes: ";
    std::cin >> n;

    std::vector<Process> processes(n);

    for (int i = 0; i < n; ++i) {
        std::cout << "Process " << i + 1 << " - Enter arrival time and burst time: ";
        std::cin >> processes[i].arrivalTime >> processes[i].burstTime;
        processes[i].pid = i + 1;
        processes[i].remainingTime = processes[i].burstTime;
    }

    // Sort the processes based on arrival time
    std::sort(processes.begin(), processes.end(), compareArrivalTime);

    sjfPreemptive(processes);

    // Calculate average waiting time, turnaround time, and response time
    double avgWaitingTime = 0.0;
    double avgTurnaroundTime = 0.0;
    double avgResponseTime = 0.0;

    for (const Process& process : processes) {
        avgWaitingTime += process.waitingTime;
        avgTurnaroundTime += process.turnaroundTime;
        avgResponseTime += process.startTime - process.arrivalTime;
    }

    avgWaitingTime /= n;
    avgTurnaroundTime /= n;
    avgResponseTime /= n;

    std::cout << "Average Waiting Time: " << avgWaitingTime << std::endl;
    std::cout << "Average Turnaround Time: " << avgTurnaroundTime << std::endl;
    std::cout << "Average Response Time: " << avgResponseTime << std::endl;

    return 0;
}
