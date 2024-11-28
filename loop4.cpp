#include<iostream>
using namespace std;
//printinf number square
int main()
{
    int n=4;
    int num=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<num<<" "<<" " ;
            num++;
        }
        cout<<"\n";
    }
    return(0);
}