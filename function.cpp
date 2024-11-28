#include<iostream>
using namespace std;
int sum(int a,int b)
{
   
    return a+b;// return statement in function is madatory except void functions
}
int main()
{
    int x=5,y=4;
    sum(x,y);
    cout<<"sum="<<sum(x,y)<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    return(0);
}