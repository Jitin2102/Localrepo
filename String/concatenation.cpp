#include <iostream>
#include <string>
using namespace std;
int main() {
    string a="Hello";
    string b="world";
    string c;
    c=a+" ";
    c+=b;
    cout<<"c is : ";
    for(char i: c){
        
        cout<<i;
    }
    return 0;
}