#include<iostream>
#include<unordered_set>
using namespace std;
int countUniqueVowels(const string &str){
 unordered_set<char>vowels;
 for(char c :str){
    c=tolower(c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
          vowels.insert(c);        
        }
    }
    return vowels.size();
}
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 
    int count = countUniqueVowels(str);
    cout <<"Number of unique vowels: "<< count << endl;
    return 0;
}
/*
int countVowels(const string& str){
    int count=0;
    for(char c :str){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            count ++;
        }
    }
    return count;
}
int main(){
    string str;
    cout<<"enter the string ";
    cin>>str;
    cout<<countVowels(str);
}*/
