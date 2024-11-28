#include <iostream>
#include <vector>
using namespace std;

bool isSortedAscending(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] > arr[i]) {
            return false;
        }
    }
    return true;
}

bool isSortedDescending(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] < arr[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr = {23, 23, 23, 23};  // You can change this array for testing

    if (isSortedAscending(arr)) {
        cout << "The array is sorted in ascending order." << endl;
    } else if (isSortedDescending(arr)) {
        cout << "The array is sorted in descending order." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    return 0;
}
