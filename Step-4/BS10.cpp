// Finding Sqrt of a number using Binary Search
/*
-> We had given a number {n} and we have to return the sqrt of that {n} through binary search 
*/

// BRUTE FORCE / ITERATIVE METHOD
/*
int floorSqrt(int n)
{
    int ans = 1;
    for(int i = 1; i < n; i++){
        if(i*i <= n){
            ans = i;
        }
        else{
            break;
        }
    }

    return ans;
}
*/


// OPTIMAL
/*
int floorSqrt(int n)
{
    int low = 1;
    int high = n;

    while(low <= high){
        long long mid = (low + high)/2;
        long long val = (mid*mid);

        if(val <= n){
            low = mid + 1;
        }
        else{
            high = mid-1;
        }

        // At the end one of the high and one of the low will always points to answer
        // High always points to lowest value or integer sqrt value
        // and low points to greater value than sqrt value

        // low points to not possible number
        // high points to possible number
    }

    return high;
}
*/

// Time Complexity = O(LogN)