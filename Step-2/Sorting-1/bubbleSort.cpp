#include <iostream>
using namespace std;
void printArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int *A, int n){
    int isSorted = 0;
    for (auto i = 0; i < n-1; i++)
    {
        isSorted = 1;
        for (auto j = 0; j < n-i-1; j++)
        {
            if(A[j] > A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0; 
            }
        }        
    }
    if(isSorted){
        return;
    }
    
}

int main()
{   
    int arr[] = {6, 2, 9, 1, 4, 10, 34};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array before sorting :- " << endl;
    printArray(arr, n);
    cout << endl;
    cout << "Array after sorting :- " << endl;
    bubbleSort(arr, n);
    printArray(arr, n);


    return 0;
}