#include<iostream>
using namespace std;
int digitSum(int num)
{
    int digitSum=0,lastDigit;
    while(num>0)
    {
        lastDigit=num % 10;
        num=num/10;
        digitSum+=lastDigit;
    }
    return digitSum; 
} 
int main()
{
    cout<<"sum="<<digitSum(2345)<<endl;
    return 0;
}   
