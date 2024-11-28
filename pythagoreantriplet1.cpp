#include<iostream>
using namespace std;
void pythot(int lt){
    int a,b,c=0,m=2;
    while (c<lt)
    {
       for(int n=1;n<m;n++){
        a=m*m-n*n;
        b=2*m*n;
        c=m*m+n*n;
       }
       if(c>lt)
       break;
       cout<<a<<" "<<b<<" "<<c<<endl;
       m++;
    }
}
int main(){
    int lt=200;
    pythot(lt);
    return 0;
}