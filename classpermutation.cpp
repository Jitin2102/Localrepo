#include<iostream>
using namespace std;

class Permutation {
public:
    int n;
    int r;

    // Function to calculate factorial
    int factorial(int num) {
        int fact = 1;
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        return fact;
    }

    // Function to calculate permutation nPr
    int nPr() {
        int nFact = factorial(n);
        int rFact = factorial(r);
        int nrFact = factorial(n - r);
        int result = nFact / nrFact;
        return result;
    }

    void getInput() {
        cout << "Enter the value of n: ";
        cin >> n;
        cout << "Enter the value of r: ";
        cin >> r;
    }
};

int main() {
    Permutation pmr;
    pmr.getInput();
    
    int result = pmr.nPr();
    cout << "Result: " << result << endl;

    return 0;
}
