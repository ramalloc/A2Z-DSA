// Longest Consequitive Sequence - {1, 2, 3} OR {101, 102, 103} from arr{1, 3, 102, 101, 2, 103}
// It returns the length of the Longest Consequitive Sequence

// BRUTE

/*
bool ls(vector<int>&arr, int num){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == num){
            return true;
        }
    }
    return false;
}
int longestSuccessiveElements(vector<int>&a) {
    int n = a.size();
    int longest = 0;
    for(int i = 0; i < n; i++){
        int count = 1;
        int x = a[i];

        while(ls(a, a[i] + 1) == true){
            x = x+1;
            count++;
        }

        longest = max(count, longest)
    }
}
*/
// Time Complexity -> O(N) * O(N)

// BETTER
/*
1. Sort the array.
2. Create a vriable {lastSnmaller} = INT_MIN; longest = 0; countCurrent = 0;
*/

/*
int longestSuccessiveElements(vector<int>&a) {
    int n = a.size();
    if(n == 0){
        return 0;
    }

    sort(a.begin(), a.end());

    int lastSmaller = INT_MIN;
    int longest = 1;
    int countCurrent = 0;

    for(int i = 0; i < n; i++){
        if(a[i]-1 == lastSmaller){
            countCurrent++;
            lastSmaller = a[i];
        }
        else if(a[i] != lastSmaller){
            countCurrent = 1;
            lastSmaller = a[i];
        }

        longest = max(longest, countCurrent);
    }
    return longest;
}
*/

// Time Complexity -> O(N)
// Space Complexity -> O(N)


// OPTIMAL
/*
In Optimal Solution
1. we put the array in unordered_set.
2. Then We pickup the 1st element{unordSet[i]} , if the element is not starting point, then we check for the starting point
3. In order to find the starting point of that number, we check if there{in Set} exist an element{unordSet[i]} which is equals
    to element-1{unordSet[i]-1}.
4. But If There is no element{unordSet[i] - 1} exist then it is the starting point.
5. Then Start searching in the set for the elements which is next to the element{unordSet[i]+1}.
    Increase the count and also compare longest = max(longest, count).   

*/

/*
int longestSuccessiveElements(vector<int>&a) {
    int n = a.size();
    if(n == 0)  return 0;
    int longest = 1;
     
    unordered_set<int> st;
    for(int i = 0; i < n; i++){
        st.insert(a[i]);
    }

    for(auto it: st){
        if(st.find(it - 1) == st.end()){ // If there is no {element  - 1}.
            int count = 1;
            int x = it;

            while(st.find(x+1) != st.end()){ // while there is {element + 1} exists.
                x = x + 1;
                count++;
            }
            longest = max(longest, count);
        }
    }

    return longest;

}
*/

// Time Complexity -> O(N) + O(2N)
// Space Complexity -> O(N)