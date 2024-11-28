#include<iostream>
using namespace std;
struct rectangle
{
    int length;
    int width;
};
int main(){
    struct rectangle  rec;
    rec.length=23;
    rec.width=27;
    int area= rec.length * rec.width;
    cout<<"Area of rectangle="<<area;
    return 0;
}