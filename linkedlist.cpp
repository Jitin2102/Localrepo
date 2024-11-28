#include<iostream>
#include<string>
using namespace std;
struct Car{
    string name;
    long long int price;
    Car* next;
};
void printCars(Car* n){
    while(n!=NULL){
        cout<<"Name:"<<n->name<<"\nPrice:"<<n->price<<endl;
        n=n-> next;

    }
 //applying linked list in car company
}
int main(){
    Car* head=NULL;
    Car* second=NULL;
    Car* third=NULL;
    head= new Car();
    second=new Car();
    third=new Car();
    head->name=" Bugati";
    head->price=1499999;
    head->next=second;
    second->name=" Thar";
    second->price=1999999;
    second->next=third;
    third->name=" Breeza";
    third->price=2199999;
    third->next=NULL;

    printCars(head);

    return 0;

}    