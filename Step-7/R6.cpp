// Print All Subsequence 
// Subsequence -> A contigious or non-contigious sequences which follows order

// We can do this with Power set Algo but we will use the Recursion here

#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<int> arr, int n){
    for(auto it: arr){
        cout << it << " ";
    }
    cout << endl;
}

void printSubSeq(int arr[], vector<int> &store, int i, int n){
    if(i >= n){
        printArr(store, n);
        return;
    }
    store.push_back(arr[i]);

    // Belwo we are deailng with take condition, when we take the value at index 
    printSubSeq(arr, store, i+1, n);

    // Removing the last element for to not take condition
    store.pop_back();
    // Below will deal with the not take and miscllaneous condition
    printSubSeq(arr, store, i+1, n);
}

int main(){
    int arr[] = {3, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> store;
    printSubSeq(arr, store, 0, n);

    return 0;
}

// Time Complexity = O(2^n + n)
// Space Complexity = O(n)