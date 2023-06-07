#include <iostream>
using namespace std;

void backtrack1toN(int i, int n)
{
    if (n < i)
        return;
    backtrack1toN(i, n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    printf("Enter the value of n : ");
    cin >> n;
    backtrack1toN(1, n);
    return 0;
}