#include<iostream>
using namespace std;
void printPattern(int n){
    int i,j,k,m=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<m;
            m++;
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