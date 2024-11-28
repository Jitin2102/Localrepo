#include<iostream>
using namespace std;
//linear search
int i;
int linearSearch(int arr[],int sz,int target ){
    for( i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={12,44,56,67,89};
    int sz=5,target=56;
    cout<<linearSearch(arr,sz,target)<<endl;
    return 0;
}