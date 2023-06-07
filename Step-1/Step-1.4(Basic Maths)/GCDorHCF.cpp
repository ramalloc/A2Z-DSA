#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    cout << "Enter the first number for finding GCD : ";
    cin >> n1;
    cout << endl;
    cout << "Enter the first number for finding GCD : ";
    cin >> n2;

    int answer;
    for (auto i = 1; i < min(n1, n2); i++)
    {
        if(n1%i == 0 && n2%i == 0){
            answer = i;
        }
    }
    cout << "The GCD of the two numbers is  : " << answer << endl;
    
    

    return 0;
}