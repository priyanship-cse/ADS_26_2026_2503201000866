

#include <iostream>
using namespace std;

void merge(int A[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1 + 1];
    int R[n2 + 1];

    // Copy elements into temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = A[p + i];

    for (int j = 0; j < n2; j++)
        R[j] = A[q + 1 + j];

    // Sentinel values
    L[n1] = 999999;
    R[n2] = 999999;

    int i = 0;
    int j = 0;

    // Merge the two sorted subarrays
    for (int k = p; k <= r; k++)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;

        mergeSort(A, p, q);
        mergeSort(A, q + 1, r);

        merge(A, p, q, r);
    }
}

int main()
{
    int A[] = {38, 12, 27, 43, 9, 31, 18, 25};
    int n = sizeof(A) / sizeof(A[0]);

    mergeSort(A, 0, n - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}