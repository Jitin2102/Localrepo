#include <iostream>
using namespace std;

void diamond(int n) {
    int i, j, k;

    // Upper part of diamond
    for (i = 1; i <= n; i++) {
        for (j = n; j > i; j--) {
            cout << " ";
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of diamond
    for (i = n - 1; i >= 1; i--) {
        for (j = n; j > i; j--) {
            cout << " ";
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
   // cout << "Enter the value of n = ";
    //cin >> n;
    diamond(5);
    return 0;
}
