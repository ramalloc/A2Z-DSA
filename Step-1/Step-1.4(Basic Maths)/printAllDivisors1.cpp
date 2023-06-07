#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n2;
    cout << "Enter the number to get all divisors : ";
    cin >> n2;

    for (int i = 1; i <= sqrt(n2); i++)
    {
        if (n2 % i == 0)
        {
            cout << i << " ";
            if (i != n2 / i)
                cout << n2 / i << " ";
        }
    }

    return 0;
}