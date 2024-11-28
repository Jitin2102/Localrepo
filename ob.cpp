#include<iostream>
using namespace std;
class student
{
    public:
    int rollNo;
    string name;
    void show(){
        cout<<"Name:"<<name<<endl<<"RollNo:"<<rollNo;
    }
};

int main(){
    // . operator is used to access members and menber functions of a class using this we create objects of a class

    student ob;
    ob.rollNo=214;
    ob.name="Harsh";
    ob.show();
    cout<<endl;
    student ob1;
    ob1.rollNo=216;
    ob1.name="Himanshu";
    ob1.show();
    return 0;
}