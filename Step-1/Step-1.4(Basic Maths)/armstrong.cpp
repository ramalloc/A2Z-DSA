#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int n = num;
    int x = num;

    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    cout << "The count of the number is : " << count << endl;
    double sumOfPower = 0;
    while (x != 0)
    {
        int remainder = x % 10;
        cout << "remainder = " << remainder << endl;
        sumOfPower += pow(remainder, count); // The pow funtion is returning floating point number, So it cannot add with integer variable.
                                            // Therefore we take double of sumofpower
        cout << "SumOfPower = " << sumOfPower << endl;
        cout << "x = " << x << endl;

        x /= 10;
    }

    if (sumOfPower == num)
    {
        cout << "This is an Armstrong number !" << endl;
    }

    else
    {
        cout << "This is not an Armstrong number !" << endl;
    }

    return 0;
}