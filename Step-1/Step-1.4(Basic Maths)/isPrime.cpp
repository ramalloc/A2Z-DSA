#include <iostream>
using namespace std;

bool isPrime(int N)
{
    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            return false;
        }
        return true;
    }
}

int main()
{
    int val;
    cout << "Enter the number to check for prime : ";
    cin >> val;

    bool answer = isPrime(val);
    if (val != 1 && answer == true)
    {
        cout << "The number is Prime !" << endl;
    }
    else
    {
        cout << "The number is not Prime !" << endl;
    }
    return 0;
}