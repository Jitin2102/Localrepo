#include<iostream>
using namespace std;
int main(){
    int currSum=0,maxSum=INT16_MIN,n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};
    for(int i=0;i<n;i++){
        currSum= currSum + arr[i];
        maxSum=max(maxSum,currSum);
        if ((currSum<0))
        {
            currSum=0;
        }
        
    }cout<<"the maximum subarrary sum is="<<maxSum<<endl;
    return 0;
}