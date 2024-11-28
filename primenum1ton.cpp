#include<iostream>
using namespace std;
// home work question 2
// printing prime no 1 to n
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
void primeNum2n(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main() {
    int a, b;
    cout << "enter the value of a=";
    cin >> a;
    cout << "enter the value of b=";
    cin >> b;
    primeNum2n(a, b);
    return 0;
}
