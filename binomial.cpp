#include<iostream>
using namespace std;
// calculating binomial coefficient
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int nCr(int n,int r)
{
    int factorial_n= factorial(n);
    int factorial_r= factorial(r);
    int factorial_nmr= factorial(n-r);
    int nCr=factorial_n/(factorial_r *factorial_nmr);
    return nCr;
}
int main()
{
    int n,r;
    cout<<"enter the value of n=";
    cin>>n;
    cout<<"enter the value of r=";
    cin>>r;
    cout<<"the binomial coefficient ="<<nCr(n,r)<<endl;
    return 0;   
}