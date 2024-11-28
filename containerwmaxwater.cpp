#include<iostream>
using namespace std;
int main(){
    int w,ht,currWater,maxWater,i,j;
    int height[]={1,8,6,2,5,4,8,3,7};
    for(i=0;i<9;i++){
        for(j=i+1;j<9;j++){
            ht=min(height[i],height[j]);
            w=j-i;
            currWater=w*ht;
            maxWater=max(maxWater,currWater);
        }
    }
    cout<<maxWater;
    return 0;
}