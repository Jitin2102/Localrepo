#include<iostream>
using namespace std;
// calculating exponent of a number either positive or negative
double myPow(double x,int n){
    long binForm=n;
    double ans=1;
    if(n<0){
        x=1/x;
        binForm=-binForm;
    }
    if(n==0)
    return 1.0;
    if(x==0)
    return 0.0;
    if(x==1)
    return 1.0;
    if(x==-1 && n%2==0)
    return 1.0;
    if(x==-1 && n%2!=0)
    return -1.0;
    while(binForm>0){
        if(binForm%2==1){
            ans*=x;
        }
        x*=x;
        binForm/=2;
    }
 return ans;
}
int main(){
    int n;
    double x,pow;
    cout<<"enter the value of x=";
    cin>>x;
    cout<<"enter the value of n=";
    cin>>n;
    pow=myPow(x,n);
    cout<<pow<<endl;
    return 0;
}