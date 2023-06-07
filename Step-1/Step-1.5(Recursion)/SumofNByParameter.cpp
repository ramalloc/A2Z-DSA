#include<iostream>
using namespace std;

void SumtoN(int i, int sum){
    if(i < 1){
        cout << "The sum till to number is : " << sum << endl;
        return;
    }
    SumtoN(i - 1, sum + i);
}

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    SumtoN(n, 0);
    return 0;
}
