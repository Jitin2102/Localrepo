#include <iostream>
using namespace std;

class intcell 
{
    public:
    double a;
    double b;
    
    double getpdt(){
        return a*b;
    }
    double getsum(){
        return a+b;
    }
};
int main(){
    intcell inter;
    inter.a=2.34;
    inter.b=3.25;
    double result=inter.getpdt();
    cout<<"product:"<<result<<endl;
    return 0;
}
