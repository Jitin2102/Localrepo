#include<iostream>
using namespace std;
int main(){
    int i;
    int nums[]={1,2,3,4},ans[4];
    int n=4;
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
            ans[i] *=nums[j]  ;  
            } 
        }
    
    }
    for(i=0;i<n;i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}