#include<iostream>
using namespace std;
int main(){
    int n1;
    cout << "Enter the number to get all divisors : ";
    cin >> n1;

    for (int i = 1; i <= n1; i++)
    {
        if(n1%i == 0){
            cout << i << " ";
        }
    }
    

    return 0;
}