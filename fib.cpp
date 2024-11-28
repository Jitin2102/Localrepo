#include<iostream>
using namespace std;
int fib(int n)
{
    int i;
    for(i=2;i<=n;i++)
    { 
        return i+(i-1);
    }
}
int main()
{
    int n=10;
    cout<<fib(n);
    return 0;
}