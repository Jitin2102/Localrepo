#include<iostream>
using namespace std;
int main(){
    string str="ramkrishna";
    int s=0,e=str.length()-1;
    while(s<e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
    cout<<str;
}