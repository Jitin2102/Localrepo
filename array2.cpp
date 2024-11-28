#include<iostream>
using namespace std;
/*sorting of an array*/
int main(){
    int j,i,t;
    int arr[]={34,67,45,23,56};
    for(i=0;i<5;i++){
        for(j=0;j<i+1;j++){
            if(arr[j]>arr[i]){
                t=arr[j];
                arr[j]=arr[i];// By swaping
                arr[i]=t;

            }
        }
    }
    for(i=0;i<5;i++){
        
        cout<<arr[i]<<" ";
    }
    return 0;
}