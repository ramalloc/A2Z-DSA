// Allocate Books or Book Allocation
/*
-> We have given an array, array is containig the total number of pages of N books and given m number of students.
-> We have to distribute those books to the students within certain conditions :- 
    1. Every student gets atleast one book, we can allocate more than one books to students but books should be different.
    2. Each book should be allocated to only one student.
    3. Book allocation should be done in a contigious manner.
-> Allocate the books to the students in such a way that the student got the minimum from the maximum number of 
    pages (summision of pages of more than one book). 
-> If the number of books are lesser than the number of students then we return -1.
*/

/*
-> If we start from the maximum number of pages which a student can hold. 
-> So the minimum no. of pages a student can be assigned is max(arr) and maximum can be assigned is sum(arr)

*/

/*
#include<bits/stdc++.h>

int isSdtBook(vector<int> arr, int page, int m, int n){
    // Initially Student 1 holding 0 pages
    int student = 1; 
    int curntPageToSdt = 0;

    // Iterating the Books which contains pages
    for(int i = 0; i < n; i++){
        // We will allocate the pages to the student only if the summision 
        // of present pages assigned to student with current pages of book is 
        // less than the given pages
        if(curntPageToSdt + arr[i] <= page){
            curntPageToSdt += arr[i];
        }

        // If present student can't hold the books more than the given pages 
        // We will move to next student and give the pages of that book
        // to that student
        else{
            student++;
            curntPageToSdt = arr[i];
        }

        // At the last the number ofo pages will get ended
    }
    return student;
}

int sumOfPages(vector<int> arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}
int findPages(vector<int>& arr, int n, int m) {
    int low = *max_element(arr.begin(), arr.end());
    int high = sumOfPages(arr, n);

    for(int page = low; page  < high; page++){
        // nnow we will check from the number of pages that 1how many book can be allocate to the how many students
        int countStudent = isSdtBook(arr, page, m, n);
        if(countStudent == m){
            return page;
        }
    }

    return -1;
}
*/

// Time Complexity = O(sum - max + 1) * O(N)



// OPTIMAL
/*
#include<bits/stdc++.h>

int noOfSdt(vector<int> &arr, int page, int n){
    // Initially Student 1 holding 0 pages
    int student = 1; 
    long long curntPageToSdt = 0;

    // Iterating the Pages of Books
    for(int i = 0; i < n; i++){
        // We will allocate the pages to the student only if the summision 
        // of present pages assigned to student with current pages of book is 
        // less than the given pages
        if(curntPageToSdt + arr[i] <= page){
            curntPageToSdt += arr[i];
        }
        // If present student can't hold the books more than the given pages 
        // We will move to next student and give the pages of that book
        // to that student
        else{
            student += 1;
            curntPageToSdt = arr[i];
        }
    }
    return student;
}

int findPages(vector<int>& arr, int n, int m) {
    // If no. of students > no. of books
    if(m > n) return -1;
    // Settign low to maximum page book
    int low = *max_element(arr.begin(), arr.end());
    // Setting high to sum of pages in array
    int high = accumulate(arr.begin(), arr.end(), 0);

    while(low <= high){
        int mid = low + (high - low)/2;
        // Calculating the no. of student at the given page(mid)
        int students = noOfSdt(arr, mid, n);
        // If no. of students > given students then means 
        // we should increase the maximum pages (mid)
        if(students > m){
            // If the no. of students is more than given stdunts
            // then we need to increase the no. of pages
            //  or increase the low
            low = mid + 1;
            // At the end low points to answer
        }
        else{
            high = mid - 1;
        }
    }

    return low;
}
*/
// Time Complexity = O(Log(sum - max)) * O(N)