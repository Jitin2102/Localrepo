#include<iostream>
using namespace std;
int main(){
    int i;
    string txt="jitinkumar";
    string pat="tinku";
    size_t idx=txt.find(pat);
    if(idx!=string::npos){
        cout<<idx;
    }else{
        return -1;
    }
    return 0;
}