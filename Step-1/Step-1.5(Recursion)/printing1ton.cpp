#include <iostream>
using namespace std;

void toN(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    toN(i + 1, n);
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    toN(1, n);

    return 0;
}