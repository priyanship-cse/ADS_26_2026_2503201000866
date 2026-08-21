#include <iostream>
#include <algorithm>
using namespace std;

struct Process {
    int pid;
    int arrival;
    int burst;
    int waiting;
    int turnaround;
    int completion;
};

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    Process p[n];

    // Input
    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        cout << "Enter arrival time for P" << i+1 << ": ";
        cin >> p[i].arrival;
        cout << "Enter burst time for P" << i+1 << ": ";
        cin >> p[i].burst;
    }

    // Sort processes by arrival time
    sort(p, p + n, [](Process a, Process b) {
        return a.arrival < b.arrival;
    });

    int currentTime = 0;

    for (int i = 0; i < n; i++) {

        // If CPU is idle
        if (currentTime < p[i].arrival)
            currentTime = p[i].arrival;

        p[i].completion = currentTime + p[i].burst;
        p[i].turnaround = p[i].completion - p[i].arrival;
        p[i].waiting = p[i].turnaround - p[i].burst;

        currentTime = p[i].completion;
    }

    float totalWT = 0, totalTAT = 0;

    cout << "\nPID\tAT\tBT\tCT\tWT\tTAT\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << p[i].pid << "\t"
             << p[i].arrival << "\t"
             << p[i].burst << "\t"
             << p[i].completion << "\t"
             << p[i].waiting << "\t"
             << p[i].turnaround << "\n";

        totalWT += p[i].waiting;
        totalTAT += p[i].turnaround;
    }

    cout << "\nAverage Waiting Time: " << totalWT / n;
    cout << "\nAverage Turnaround Time: " << totalTAT / n << endl;

    return 0;
}