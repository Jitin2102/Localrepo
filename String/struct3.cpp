#include<iostream>
using namespace std;
struct Point{
    int x;
    int y;
    bool operator<(const Point & other)const{
         return (x < other.x && y < other.y)||(x==other.x && y==other.y);
    }
};
int main(){
    
    Point p1={3,4};
    Point p2={5,6};
    if(p1<p2) cout<<"Point 1 is less than Point 2."<<endl;
    else cout<<"Point 1 is not less than Point 2.";
    return 0; 
}