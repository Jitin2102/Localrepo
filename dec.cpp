#include<iostream>
using namespace std;
//decimal to binary converting
int main(){
    int decNum;
    cout<<"enter the decimal number=";
    cin>>decNum;
    int ans=0,pow=1,rem;
    while(decNum>0){
        rem=decNum%2;
        decNum/=2;
        ans+=(rem*pow);
        pow=pow*10;
    }
    cout<<"answer="<<ans;
    return 0;
}

