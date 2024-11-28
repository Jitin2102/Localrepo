#include<iostream>
using namespace std;
class Physics{
    public:
    string name;
    double grading;
    void printRating(string name,double grading){
        if(grading <3.0){
            cout<<"This teacher is not good.";
        }
        
    }
}