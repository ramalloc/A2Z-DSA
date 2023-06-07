#include <iostream>
using namespace std;

void printArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1, j = high, temp;
    do
    {
        while (A[i] <= pivot && i <= high-1)
        {
            i++;
        }

        while (A[j] > pivot && j >= low)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);
        quickSort(A, partitionIndex + 1, high);

    }
}

int main()
{
    int A[] = {12, 54, 65, 7, 23, 9, 90, 19};
    int n = sizeof(A) / sizeof(A[0]);
    cout << "Array before sorting :- " << endl;
    printArray(A, n);
    cout << endl;
    cout << "Array after sorting :- " << endl;
    quickSort(A, 0, n - 1);
    printArray(A, n);

    return 0;
}