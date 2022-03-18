#include <iostream>
#include <cmath>

using namespace std;

double nthTermFibbonacci(int n);
double npFibbonacci(int p, int n);
double nextTermFibonnaci(int n);

int main() {

    cout << "Enter a positive integer p." << endl;
    int p;
    cin >> p;
    cout << "Enter the nth value of the Fibbonacci Sequence you want to compute" << endl;
    int n;
    cin >> n;

    cout << endl << endl;

    cout << "Fibonacci Sequence using Equation 4: " << endl << endl;

    for(int i = 1; i <= n; ++i){
        cout << "Term " << i << ": " << npFibbonacci(p, i) << endl;
    }
    cout << endl;
    cout << endl;

    cout << "Fibonacci Sequence using Equation 5: " << endl << endl;
    for(int i = 0; i < 20; ++i) {
        cout << "Term " << i + 1 << ": " << nextTermFibonnaci(i) << endl;
    }
}

double nthTermFibbonacci(int n) {

    double firstTerm = pow(1 + sqrt(5), n);
    double secondTerm = pow(1 - sqrt(5), n);
    double thirdTerm = pow(2, n) * sqrt(5);
    return ((firstTerm - secondTerm) / thirdTerm);

}

double npFibbonacci(int p, int n) {
    double firstTerm = nthTermFibbonacci(p);
    double secondTerm = pow(1.61803, n-p);
    return firstTerm * secondTerm;
}

double nextTermFibonnaci(int n) {
    return nthTermFibbonacci(n) * 1.61803;
}
