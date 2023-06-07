#include<iostream>
using namespace std;

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionSort(int *arr, int n){
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
        
    }
    
}
int main(){
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = sizeof(A)/sizeof(A[0]);
    cout << "Array before sorting :- " << endl;
    printArray(A, n);
    cout << endl;
    cout << "Array after sorting :- " << endl;
    insertionSort(A, n);
    printArray(A, n);

    return 0;
}