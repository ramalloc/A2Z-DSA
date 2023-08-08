// Leaders - Means everything is in the right should be samller.
// Quetion is to find out the leaders

// BRUTE

/*
vector<int> superiorElements(vector<int>&a) {
    vector<int> ans;
    int n = a.size();
    for(int i = 0; i < n; i++){
        bool leaders = true;
        for(int j = i+1; j < n; j++){
            if(a[j] > a[i]){
                leaders = false;
                break;
            }
        }
        if(leaders == true){
            ans.push_back(a[i]);
        }
    }
    return ans;
}
*/

// Time Complexity -> O(N) * O(N)



// OPTIMAL

// If an element is maximum than the other elements present in the right then it is the leader
/*
1. Let a variable maxi = INT_MIN(minimum number)
2. Start/Iterate from the end, if(element > maxi) then maxi = element, then iterate--
3. And If the {maxi} = {leader} as well
*/

/*
vector<int> superiorElements(vector<int>&a) {
    vector<int> ans;
    int n = a.size();

    int maxi = INT_MIN;
    for(int i = n-1; i >= 0; i--){ // O(N)
        if(a[i] > maxi){
            maxi = a[i];
            ans.push_back(maxi);
        }
    }
    sort(ans.begin(), ans.end()); // O(NlogN)
    return ans;
}
*/

