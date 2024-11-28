#include<iostream>
#include<string>
using namespace std;
/*void pattern(int n){
    int ch=1;
    for(int i=1;i<=n;i++){

        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<ch<<" ";
            ch++;
        }
        
         cout<<endl; 
    
    }
    
}
int main(){
    int n=5;
    pattern(n);
    return 0;

#include <initializer_list>
 int sum(initializer_list<int> values)
 {
 int sum = 0;
 for (int i : values) sum += i;
 return sum;
 }
 int main()
 {
 cout << sum({}) << endl; // 0
 cout << sum({-6, -5, -4, -3, -2, -1}) << endl; // -21
 cout << sum({10, 20, 30}) << endl; // 60
 return 0;
 }

long long int factorial(int n)
 {
 if (n > 1) return n * factorial(n -1); // CALCULATING FACTORIAL WITHOUT LOOP
 return 1;
 }
int main(){
    int n=33;
    cout<<factorial(n)<<endl;
    return 0;
}

#include<vector>
int main(){
    vector<int>grids={{4,4,4,4,4,4,4},{4,3,3,3,3,3,4},{4,3,2,2,2,3,4},{4,3,2,1,2,3,4},{4,3,2,2,2,3,4},{4,3,3,3,3,3,4},{4,4,4,4,4,4,4}};
    for(int i=0;i<grids.size();i++){
        for(int j=0;j<grids.size();j++){                      //ERROR
            cout<<grids[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
int main(){
    int n=7,i,j,k,a[3][3],b[3][3],c[3][3];
    cout<<"Enter the elements of array:a"<<endl;
    for(i=0;i<3;i++){
        for( j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of array:b"<<endl;
    for(i=0;i<3;i++){
        for( j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    
    cout<<"the array c is"<<endl;
    for(i = 0; i < 3; i++) { 
        for(j = 0; j < 3; j++) {
             for(k = 0; k < 3; k++) {
                 c[i][j] += a[i][k] * b[k][j]; 
                 }
                 
            }
        }
    for(i=0;i<3;i++){
        for( j=0;j<3;j++){
            cout<<c[i][j]<<"\t";
        }
    }    
       
    return 0;
}
