#include<iostream>
using namespace std;
void printPattern(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=i;k>=1;k--){
            cout<<k;
        }
        cout<<"\n";

    }
}
int main(){
    int n;
    cout<<"Enter the value of n= ";
    cin>>n;
    printPattern(n);
    return 0;
}