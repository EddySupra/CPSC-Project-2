#include <iostream>
#include <cmath>

using namespace std;

double nthTermFibbonacci(int n);
double npFibbonacci(int p, int n);
double nextTermFibonnaci(int n);
int getPositiveInt();

int main() {

    cout << "Enter a positive integer p." << endl;
    int p = getPositiveInt();

    cout << "Enter the nth value of the Fibbonacci Sequence you want to compute" << endl;
    int n = getPositiveInt();

    cout << endl << endl;

    cout << "Fibonacci Sequence using Equation 4: " << endl << endl;
    
    cout << npFibbonacci(p, n);
    cout << endl;
    cout << endl;

    cout << "Fibonacci Sequence using Equation 5: " << endl << endl;
    for(int i = 0; i < 20; ++i) {
        cout << "Term " << i + 1 << ": " << nextTermFibonnaci(i) << endl;
    }
    cout << endl;
    cout << endl;
    cout << "F4 divided by F3 is " << nthTermFibbonacci(4) / nthTermFibbonacci(3) << endl;
    cout << "F31 divided by F30 is " << nthTermFibbonacci(31) / nthTermFibbonacci(30) << endl;
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

int getPositiveInt() {
    float temp;
    cin >> temp;
    if(int(temp) != temp || temp < 0) {
        cout << "Input was float or negative please try again. " <<endl;
        return getPositiveInt();
    }
    return int(temp);
}