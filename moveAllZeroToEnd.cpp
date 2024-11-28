#include<iostream>
#include<vector>
using namespace std;
// move all zeros at end of the array
int moveAllZeroEnd(vector<int>&arr){
    int n=arr.size();
    vector<int>temp(n);
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0)
        temp[j++]=arr[i];
    }
    while(j<n){
       temp[j++]=0;
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}
int main(){
    vector<int>arr={0,20,0,43,98,0,8};
    moveAllZeroEnd(arr);
    for(int num:arr){
        cout<<num<<" ";
    }
    return 0;
}