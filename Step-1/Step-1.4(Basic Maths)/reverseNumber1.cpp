#include<iostream>
#include<cmath>
using namespace std;
int reverse(int);
int main(){
    int n;
    cout << "Enter the number to be reverse : ";
    cin >> n;

    cout << "revere is : " << reverse(n);

    return 0;
}
int reverse(int x) {
        long num=abs(x);
        long rev_num=0;
        while(num)
        {
            rev_num*=10;
            int digit=num%10;
            rev_num+=digit;
            num/=10;
        }
        if(x<0) rev_num*=-1;
        if(rev_num>=-1*pow(2,31)&&rev_num<=pow(2,31)-1) return rev_num;
        else return 0;
    }