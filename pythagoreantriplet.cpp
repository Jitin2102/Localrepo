#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a=";
    cin>>a;
    cout<<"Enter the value of b=";
    cin>>b;
    cout<<"Enter the value of c=";
    cin>>c;
    if(a+b>c&&(a*a+b*b)==c*c)
    cout<<"\"IT IS A PYTHO TRIPLET!\"";
    else if(b+c>a&&(b*b+c*c)==a*a)
    cout<<"\"IT IS A PYTHO TRIPLET!\"";
    else if(a+c>b&&(b*b+c*c)==b*b)
    cout<<"\"IT IS A PYTHO TRIPLET!\"";
    else
    cout<<"\"not a pythagorian triplet!\"";
 return 0;
} 
