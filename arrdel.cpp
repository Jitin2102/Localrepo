#include<iostream>
using namespace std;
int main(){
    int size=5;
    int arr[]={23,34,45,89,32};
    int n,index=-1,i;
    cout<<"enter the value of element which has to be deleted= ";
    cin>>n;
    for(i=0;i<size;i++){
        if(n==arr[i]){
            index=i;
            break;
        }
    }
    if(index!=1){          // error
        for(i=0;i<size;i++){
            arr[i]=arr[i+1];
        }
        
        for(i=0;i<size-1;i++){
            cout<<arr[i]<<"\t";
        }
    }
    else{
        cout<<"element not found";
    }
    return 0;

}