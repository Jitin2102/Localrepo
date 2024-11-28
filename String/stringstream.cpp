#include<iostream>
#include <sstream>
using namespace std;
int main(){
    string s="Hello Everyone I Am Jitin Kumar.";
    stringstream obj(s);
    string temp;
    while(obj>>temp){
        cout << temp <<" ";
    }
    return 0;
    
}