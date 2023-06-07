#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string);
int main()
{
    string s;
    cout << "Enter the string : ";
    cin >> s;

    bool ans = isPalindrome(s);
    if (ans)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}

bool isPalindrome(string s)
{
    int st = 0;
    int end = s.length() - 1;
    while (st <= end)
    {
        if (!isalnum(s[st]))
        {
            st++;
            continue;
        } // isalnum to check whether its alphabet or number
        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[st]) != tolower(s[end]))
        { // tolower to convert it into lower case incase, its case sensitive
            return 0;
        }
        else
        {
            st++;
            end--;
        }
    }
    return 1;
}