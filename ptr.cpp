#include<iostream>
#include<string>
using namespace std;
//printimg name of a student
/*int main(){
    string firstName,lastName;
    cout<<"enter your firstName:";
    cin>>firstName;
    cout<<"enter your lastName:";
    cin>>lastName;
    cout<<"your name is:"<<firstName<<" "<<lastName;
    return 0;
}*/
int main(){
    string fullName;
    cout<<"Enter your fullName:";
    getline (cin,fullName);
    cout<<"Your Name is:"<<fullName;
    return 0;
}