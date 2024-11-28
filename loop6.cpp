#include<iostream>
using namespace std;
// HOLLOW SQUARE
void hollowsquare(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||i==n||j==1||j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the no. : ";
    cin>>n;
    hollowsquare(n);
    return 0;
}