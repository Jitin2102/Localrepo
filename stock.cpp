#include<iostream>
using namespace std;
//stock sell and buy
int main(){
    int prices[]={7,1,5,3,6,4};
    int bestBuy=7,maxProfit=0;
    for(int i=0;i<6;i++){
        if(prices[i]>bestBuy){
            maxProfit=max(maxProfit,prices[i]-bestBuy);
        }
    bestBuy=min(bestBuy,prices[i]);
    }
    cout<<"maximum profit="<<maxProfit<<endl;
    return 0;
}