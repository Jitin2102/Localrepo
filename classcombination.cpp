#include<iostream>
using namespace std;
class Combination{
    public:
    int n;
    int r;
    int factorial(int num){
        int fact=1; 
        for(int i=1;i<=num;i++){
            fact*=i;
        }
      return fact;  
    }
    int nCr(){
        int nCr;
        nCr=factorial(n)/( factorial(r)* factorial(n-r));
        return nCr;
    }
    void getInput(){
        cout<<"Enter the value of n: ";
        cin>>n;
        cout<<"Enter the value of r: ";
        cin>>r;
    }
};
int main(){
   Combination nCr;
   nCr. getInput();
   int result=nCr.nCr();
   cout<<"nCr= "<<result<<endl;
   return 0;
}