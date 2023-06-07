#include <iostream>
using namespace std;

int count(int n)
{
    int x = n, count = 0;
    while(x != 0){
        x = x/10;
        count++;
    }
    return count;
}

int main(){
    int n;
    cout << "Enter the number to be count : ";
    cin >> n;
    cout << "The count of the number " << n << " is : " <<  count(n) << endl;



    return 0;
}