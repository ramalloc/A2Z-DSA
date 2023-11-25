/*
1. First we iterate both arrays together then we iterate the remaning array individually.
2. If arr[i] < arr[j] then we kept the element in Union but We have to check that the element haven't been already in the 
    union, therefore we use this line of code -> {unionArray.back() != a[i]}.
3. But if the union is empty then it will show always that the element is not there, therefore we use this line of code ->
     unionArray.size() == 0 .
*/
/*
#include <iostream>
#include <bits/stdc++.h>
vector < int > sortedArray(vector < int > &a, vector < int > &b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArray;
    while(i < n1 && j< n2){
        if(a[i] <= b[j]){
            if(unionArray.back() != a[i] || unionArray.size() == 0){
                unionArray.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArray.back() != b[j] || unionArray.size() == 0){
                unionArray.push_back(a[j]);
            }
            j++;
        }
    }

    while(i<n1){
        if(unionArray.back() != a[i] || unionArray.size() == 0){
                unionArray.push_back(a[i]);
            }
            i++;
    }

    while(j<n2){
        if(unionArray.back() != b[j] || unionArray.size() == 0){
                unionArray.push_back(b[j]);
            }
            i++;
    }

    for(auto it: unionArray){
        cout << it << " ";
    }
    
}

int main()
{
    int vector<int> a1 = {1, 3, 4, 5};
    int vector<int> a2 = {1, 2, 3, 4, 5, 6};

    sortedArray(a1, a2);
   
}
*/
