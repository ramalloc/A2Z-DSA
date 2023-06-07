#include <iostream>
using namespace std;

void reverseArray(int arr[], int l, int r)
{
    if (l < r)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
        reverseArray(arr, l, r);
    }
    return;
    
}

void printArray(int arr[], int N)
{
    if(N < 0)
        return;
    printArray(arr, N-1);
    cout << arr[N] << " " ;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n-1); // size is 5 (6-1)
    reverseArray(arr, 0, n - 1);
    cout << endl;
    printArray(arr, n-1);

    return 0;
}