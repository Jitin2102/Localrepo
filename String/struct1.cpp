#include<iostream>
using namespace std;
struct Complex{
    double real;
    double imag;
    Complex operator+(const Complex & other)
   {
     Complex result;
     result.real=real+other.real;
     result.imag=imag+other.imag;     // adding two complex no.s with the help of structure
     return result;
   }
};
int main(){
    Complex c1={2.3,4.5};
    Complex c2={1.2,3.4};
    Complex c3=c1+c2;
    cout<<"Sum:("<<c3.real<<"+"<<c3.imag<<"i)"<<endl;
    return 0;
}