
#include <iostream>
#include <climits>
using namespace std;

struct Process {
    int pid, arrival, burst;
    int waiting, turnaround, completion;
    bool completed;
};

int main() {
    int n;

    cout << "Enter number of processes: ";
    cin >> n;

    Process p[n];

    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        p[i].completed = false;

        cout << "Enter arrival time for P" << i + 1 << ": ";
        cin >> p[i].arrival;

        cout << "Enter burst time for P" << i + 1 << ": ";
        cin >> p[i].burst;
    }

    int currentTime = 0;
    int completed = 0;

    while (completed < n) {
        int index = -1;
        int minBurst = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (!p[i].completed &&
                p[i].arrival <= currentTime &&
                p[i].burst < minBurst) {

                minBurst = p[i].burst;
                index = i;
            }
        }

        if (index == -1) {
            currentTime++;
        }
        else {
            currentTime += p[index].burst;

            p[index].completion = currentTime;
            p[index].turnaround =
                p[index].completion - p[index].arrival;

            p[index].waiting =
                p[index].turnaround - p[index].burst;

            p[index].completed = true;
            completed++;
        }
    }

    float totalWT = 0;
    float totalTAT = 0;

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

    cout << "\nAverage Waiting Time: "
         << totalWT / n;

    cout << "\nAverage Turnaround Time: "
         << totalTAT / n << endl;

    return 0;
}


