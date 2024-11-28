#include<iostream>
using namespace std;
// printing character square and here transcripting has been used
int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        char ch='A';
        for(int j=0;j<n;j++)
        {
            cout<<ch;
            ch=ch+1;
        }
        cout<<"\n";
    }
    return(0);
}