#include <iostream>
using namespace std;

bool checkStrPalindrome(string str, int i, int N)
{
    if (i >= N / 2)
        return true;

    if (str.at(i) != str.at(N - i - 1))
        return false;
        
    return checkStrPalindrome(str, i + 1, N);
}

int main()
{
    string str;
    cout << "Enter the string : ";
    cin >> str;
    int n = str.size();

    bool check = checkStrPalindrome(str, 0, n);
    if (check)
    {
        cout << "It's a Palindrome !" << endl;
    }
    else
    {
        cout << "It's Not a Palindrome !" << endl;
    }

    return 0;
}