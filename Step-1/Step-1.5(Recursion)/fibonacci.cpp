#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main()
{
    int n;
    cout << "Enter the nth place of fibonacci : ";
    cin >> n;
    cout << "The fibonacci pattern is : ";
    cout << fibonacci(n);

    return 0;
}