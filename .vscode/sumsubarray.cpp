#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[7]={3,-4,5,4,-1,7,8};
    int currSum=0,maxSum=INT16_MIN,n=7;
    for(int st=0;st<n;st++){
          for(int end=st;end<n;end ++){
            currSum=arr[end];
          }
          maxSum=max(currSum,maxSum);
    }
    cout<<"the maximum subarray sum ="<<maxSum<<endl;
    return 0;
} 