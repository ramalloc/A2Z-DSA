// BRUTE
// Merge Sort

// BETTER

// #include <bits/stdc++.h>
// void sortArray(vector<int>& arr, int n)
// {
//     int count0 = 0;
//     int count1 = 0;
//     int count2 = 0;
//     for(int i = 0 ; i < n; i++){
//         if(arr[i] == 0){
//             count0++;
//         }
//         else if(arr[i] == 1){
//             count1++;
//         }
//         else{
//             count2++;
//         }
//     }

//     for(int i = 0; i < count0; i++){
//         arr[i] = 0;
//     }
//     for(int i = count0; i < count0 + count1; i++){
//         arr[i] = 1;
//     }
//     for(int i = count0 + count1; i < n; i++){
//         arr[i] = 2;
//     }
// }

// OPTIMAL
// This is called DUTCH NATIONAL FLAG ALGORIHIM
// It is a three pointer solution
// There are some rules

// [0.....low-1] --> 0 (Extreme Left)
// [low....mid-1] --> 1
// [high+1....n-1] --> 2

/* 
        0      low-1   low     mid-1    mid     high    high+1     n-1
        ^        ^      ^       ^         ^       ^       ^         ^      
        |        |      |       |         |       |       |         |
        |        |      |       |         |       |       |         |
        |        |      |       |         |       |       |         |
        |        |      |       |         |       |       |         |
        |        |      |       |         |       |       |         |
        0 0 0 0 0       111111111         0/1/2...        2222222222   
    *\

    // So lets assume that our array is in [mid] to [high] which is unsorted
/*

    Low
     |
    {0, 2, 1, 0, 2, 1, 0, 1}
     |                    |  
     Mid                 High   
*/
    // Steps to sort

    /*
    if(a[mid] == 0) 
        swap(a[low], a[mid]);
        low++; mid++;
    else if(a[mid == 1]) mid++;

    else if(a[mid] == 2) 
        swap(a[mid], a[high]);
        high--;
    */


/*
void sortArray(vector<int>& arr, int n)
{
    int low = 0, mid = 0, high = n-1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
*/

     
// Time Complexity -> O(N)
// Space Complexity -> O(1)