#include<iostream>
#include<string>
using namespace std;
struct Book
{
    string title;
    string author;
    bool operator==(const Book & other)const{
        return (title==other.title && author==other.author);
    }
    bool operator!=(const Book & other)const{
        return (*this==other);
    }
};
int main(){
    Book book1={"1984","George Orwell"};
    Book book2={"Animal Farm","George Orwell"};
    if(book1==book2)cout<<"Books are the same"<<endl;
    else cout<<"Books are different.";
    return 0;
}

