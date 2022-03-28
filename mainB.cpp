#include <iostream>
#include <cmath>

using namespace std;

double nthTermFibonacci(int n);
double npFibbonacci(int p, int n);
double nextTermFibonnaci(int n);
int getPositiveInt();

int main() {

    cout << "First 20 terms of the Fibonacci Sequence: " << endl;
    for(int i = 1; i <= 20; ++i) {
        cout << i << ": " << nthTermFibonacci(i) << endl;
    }

    cout << endl;

    cout << "Enter a positive integer p." << endl;
    int p = getPositiveInt();

    cout << "Enter the nth value of the Fibonacci Sequence you want to compute" << endl;
    int n = getPositiveInt();

    cout << endl << endl;

    cout << n <<"th term of Fibonacci Sequence using Equation 4 with p value of " << p << ": " << endl;

    cout << npFibbonacci(p, n);
    cout << endl;
    cout << endl;

    cout << n <<"th term of Fibonacci Sequence using Equation 5: " << endl;
    cout << nextTermFibonnaci(n - 1);

    cout << endl;
    cout << endl;
    cout << "F4 divided by F3 is " << nthTermFibonacci(4) / nthTermFibonacci(3) << endl;
    cout << "F31 divided by F30 is " << nthTermFibonacci(31) / nthTermFibonacci(30) << endl;
}

double nthTermFibonacci(int n) {

    double firstTerm = pow(1 + sqrt(5), n);
    double secondTerm = pow(1 - sqrt(5), n);
    double thirdTerm = pow(2, n) * sqrt(5);
    return ((firstTerm - secondTerm) / thirdTerm);

}

double npFibbonacci(int p, int n) {
    double firstTerm = nthTermFibonacci(p);
    double secondTerm = pow(1.61803, n-p);
    return firstTerm * secondTerm;
}

double nextTermFibonnaci(int n) {
    return nthTermFibonacci(n) * 1.61803;
}

int getPositiveInt() {
    float temp;
    cin >> temp;
    if(int(temp) != temp || temp < 0) {
        cout << "Input was float or negative please try again. " << endl;
        return getPositiveInt();
    }
    return int(temp);
}