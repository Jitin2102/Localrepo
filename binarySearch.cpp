#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>arr,int tar){
    int st=0,end=arr.size()-1,mid;
    while(st<=end){
        mid= (st+end)/2;
        if(tar< arr[mid]){
            end=mid-1;
        }                          // while loop is  suitable for binary search
        else if(tar>arr[mid]){
            st=mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    int tar=4;
    vector<int>arr={-1,0,3,4,5,12};
    cout<<binarySearch(arr,tar);
    return 0;

}