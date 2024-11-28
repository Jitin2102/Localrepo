#include <iostream>
#include<string>
using namespace std;
bool isPalindrome(string str){
    int st=0;
    int e=str.length()-1;
    while(st < e ){
           if(str[st]!=str[e]){
             return false;    //                       HERE BINARY SEARCH IS USED TO CHECK A WORD. 
           }
           st++;
           e--;
    }
    return true;
}
int main(){
    string str;
    cout<<"Enter the string ";
    cin>>str;
    if(isPalindrome(str)){
        cout<<"The entered string is a palindrome.";
    }
    else{
        cout<<"The entered string is not a palindrome.";
    }
    return 0;
}