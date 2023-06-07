#include<iostream>
using namespace std;

void toN(int N, int i){
    if(i > N){
        return;
    }
    cout << N <<" ";
    toN(N-1, i);
}

int main(){
    int n; 
    cout << "Enter the number : ";
    cin >> n;

    toN(n, 1);


    return 0;
}