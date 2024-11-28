#include<iostream>
using namespace std;
int main()
{
    // calculating maximum or minimum element of an array
    int a[]={1,4,9,16,25,36,49},i;
    int smallest=INT16_MAX;
    int largest=INT16_MIN;
    int size =7;
    for(i=0;i<size;i++){
       smallest= min(a[i],smallest);
       largest=max(a[i],largest);

    }
    cout<<"smallest="<< smallest <<endl;
    cout<<"largest="<< largest <<endl;
    return 0;
}