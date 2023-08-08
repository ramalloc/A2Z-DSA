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
    }
}
*/