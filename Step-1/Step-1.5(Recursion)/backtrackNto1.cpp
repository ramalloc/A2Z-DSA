#include<iostream>
using namespace std;

void backtrackNto1(int i, int N){
    if(i > N){
        return;
    }

    backtrackNto1(i+1, N);
    cout << i << " ";
}

int main(){
    int w; 
    cout << "Enter the number : ";
    cin >> w;

    backtrackNto1(1, w);    

    return 0;
}