#include<iostream>
using namespace std;
void printArray(int arr[], int N){
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int N){
    int minNumber, temp;
    for (int i = 0; i < N-1; i++)
    {
        minNumber = i;
        for (int j = i+1; j < N; j++)
        {
            if(arr[j] < arr[minNumber]){
                minNumber = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minNumber];
        arr[minNumber] = temp;
    }
    
        
    
}
int main(){
    int arr[] = {6, 2, 9, 1, 4, 10, 34};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array before sorting :- " << endl;
    printArray(arr, n);
    cout << "Array after sorting :- " << endl;
    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}