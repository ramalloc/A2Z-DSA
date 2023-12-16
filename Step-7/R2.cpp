#include <iostream>
using namespace std;

void printNum(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    printNum(i + 1, n);
}

void printNto1(int i)
{
    if (i < 1)
        return;
    printNto1(i-1);
    cout << i << " ";
}

void onetToNBacktrack(int i){
    if(i < 1) return;
    onetToNBacktrack(i-1);
    cout << i << " ";
}

void nto1Backtrack(int i, int n){
    if(i > n) return;
    nto1Backtrack(i+1, n);
    cout << i << " ";
}
int main()
{

    int n;
    cin >> n;

    // Print N times or print 1 to N
    // printNum(1, n);

    // Print N to 1
    // printNto1(n);

    // Print 1 to N using backtracking
    // onetToNBacktrack(n);

    // Print N to 1 using backtracking
    nto1Backtrack(1, n);

    return 0;
}

// Time Complexity = O(N)
// Space Complexity = O(N) -> Interanl Memory