#include<iostream>
using namespace std;
//binary to decimal
int binNum(int n){
    int rem,ans=0,pow=1;
    while(n>0){
        rem=n%10;
        ans=ans+(rem*pow);
        pow*=2;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the value of n=";
    cin>>n;
    cout<<binNum(n);
    return 0;
}