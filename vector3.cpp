#include<iostream>
#include<vector>
using namespace std;
//storing squares from 1 to 100 in a vector
int main(){
    vector<int>squares(100);
    for(int i=1;i<=squares.size();i++){
        squares[i]=i*i;
    }
    for(int i=1;i<=squares.size();i++){
        cout<<i<<" -: "<<squares[i]<<endl;
    }
    return 0;
}