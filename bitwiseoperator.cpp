#include<iostream>
using namespace std;
int main()
{
    int x=10,y=4,a=2,b=2;
    cout<<(x>>y)<<endl;//bitwise right shift(value decreases)
    cout<<(x<<y)<<endl;//bitwise leftshift(value increases)
    cout<<(x|y)<<endl;// x+y
    cout<<(a&b)<<endl;//opposite of bitwise and
    cout<<(a^b)<<endl;//bitwise not operator
    return 0;   
}