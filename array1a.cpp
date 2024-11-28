#include<iostream>
#include<vector>
// finding second largest element of an array of a sorted array
using namespace std;
int Secondlargest(vector<int>&arr){
  int n=arr.size();
  for(int i=n-2;i>=1;i--){
    if(arr[i-1]!=arr[i]){
        return arr[i-1];
    }
  }
  return -1;
}
int main(){
    vector<int>arr={23,34,45,87,35};
    int result=Secondlargest(arr);
    cout<<"SecondLargest element is ="<<result;
    return 0;
}
/*#include <iostream>
#include <vector>
#include <climits> // for INT_MIN
using namespace std;

int SecondLargest(vector<int>& arr) {
    int n = arr.size();
    if (n < 2) {
        cout << "Array should have at least two elements." << endl;
        return -1;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest element found." << endl;
        return -1;
    }

    return secondLargest;
}

int main() {
    vector<int> arr = {23, 34, 45, 87, 35};
    int result = SecondLargest(arr);
    if (result != -1) {
        cout << "Second largest element is = " << result << endl;
    }
    return 0;
}*/