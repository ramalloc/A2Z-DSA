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
    printSubSeq(arr, store, i+1, n);
    store.pop_back();
    printSubSeq(arr, store, i+1, n);
}

int main(){
    int arr[] = {3, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> store;
    printSubSeq(arr, store, 0, n);

    return 0;
}