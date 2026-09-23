#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& a, int low, int high) {
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(vector<int>& a, int low, int high) {
    if (low < high) {
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main() {
    int N;

    cout << "Enter number of elements: ";
    cin >> N;

    vector<int> a(N);

    cout << "Enter elements: ";
    for (int i = 0; i < N; i++)
        cin >> a[i];

    quickSort(a, 0, N - 1);

    cout << "Sorted array: ";
    for (int x : a)
        cout << x << " ";

    return 0;
}
