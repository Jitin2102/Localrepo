#include<iostream>  
#include<vector>  
using namespace std;  
// Inserting a string into an array
int main()  
{  
vector<string> v1;  
v1.push_back("JITINKUMAR");  
v1.push_back("CSEAI");  
for(vector<string>::iterator itr=v1.begin();itr!=v1.end();++itr)  
cout<<*itr<<" ";
  
return 0;   
}