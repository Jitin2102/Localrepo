#include<iostream>
using namespace std;
//home work question 1.
void primeNum(int n){
     bool isPrime=true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        {
            isPrime=false;   
        }
        break;   
    } 

    if(isPrime==true){
        cout<<n<<" is prime no";
    }
    else{
        cout<<n<<" is not prime no";
    }
}
int main(){
    int n;
    cout<<"Enter the number =";
    cin>>n;
    primeNum(n);
    return 0;   
}