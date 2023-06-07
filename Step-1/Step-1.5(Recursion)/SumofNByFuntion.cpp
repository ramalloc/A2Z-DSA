#include<iostream>
using namespace std;

int SumtoNByFunc(int n){
    if(n == 0)
        return 0;
    return n + SumtoNByFunc(n-1);
}

int main(){
    int n;
    cout << "Enter the limit number : ";
    cin >> n;
    
    cout << "The sum till to the numbe is : " << SumtoNByFunc(n) << endl;

    return 0;
}