// C++ program to implement a priority queue using an array
#include <iostream>
using namespace std;

struct Item {
    int data;
    int priority;
};

class PriorityQueue {
    Item arr[100];
    int n;

public:
    PriorityQueue() {
        n = 0;
    }

    // INSERT
    void insert(int data, int priority) {
        if (n == 100) {
            cout << "Overflow" << endl;
            return;
        }

        arr[n].data = data;
        arr[n].priority = priority;
        n++;
    }

    // DELETE
    void remove() {
        if (n == 0) {
            cout << "Underflow" << endl;
            return;
        }

        cout << "Deleted: " << arr[0].data << endl;

        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;
    }

    // DISPLAY
    void display() {
        for (int i = 0; i < n; i++) {
            cout << "Data: " << arr[i].data
                 << " Priority: " << arr[i].priority << endl;
        }
    }
};

int main() {

    PriorityQueue pq;

    pq.insert(10, 2);
    pq.insert(20, 5);
    pq.insert(30, 1);
    pq.insert(40, 8);

    cout << "Before Delete:\n";
    pq.display();

    pq.remove();

    cout << "\nAfter Delete:\n";
    pq.display();

    return 0;
}