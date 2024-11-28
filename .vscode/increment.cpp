#include<iostream>
using namespace std;
void functionPrint(int n){
    int s=0,i=1;
    while(s<=n){
        s=s+i;
        i++;
        cout<<"*";
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    functionPrint(n);
    return 0;
}