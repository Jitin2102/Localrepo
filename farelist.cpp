#include<iostream>
#include<string>
using namespace std;
//                                   USING LINKEDLIST TOM PRINT FARELIST OF ROADWAYS FROM "LUCKNOW" TO "KANPUR" VIA DIFFRENT VEHICLE
struct Fare{
    string vehicle;
    float price;
    Fare* next;
};

void PrintFareList(Fare* n){
    while(n!=NULL){
        cout<<"Vehicle: "<<n->vehicle<<", Price: "<<n->price<<endl;
        n=n->next;                   
    }
}

int main(){
   
    Fare* head=NULL;
    Fare* second=NULL;
    Fare* third=NULL;
    Fare* fourth=NULL;

    head= new Fare();
    second=new Fare();
    third=new Fare();
    fourth=new Fare();

    head->vehicle="Bus";
    head->price=141.4500;
    head->next=second;

    second->vehicle="Train";
    second->price=70.7800;
    second->next=third;

    third->vehicle="Cab With A.C.";
    third->price=150.0000;
    third->next=fourth;

    fourth->vehicle="Cab Without A.C";
    fourth->price=130.4560;
    fourth->next=NULL;

    PrintFareList(head);

    return 0;

}
