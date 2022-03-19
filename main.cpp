#include <iostream>
int fib_series(int n);

int main()
{
    // Get user input
    int n;
    std::cout << "Enter the term of the fibonacci sequence you want" << std::endl;
    std::cin >> n;
    //for loop to print out ever fibonacci number up to n
    for (int i = 0; i <= n; i++)
    {
        std::cout << fib_series(i) << ", ";
    }

}
int fib_series(int n)
{
    //if n = 1 or 0 just return n
    if (n <= 1)
    {
        return n;
    }
    else
    // n-2 + n-1 = nth term
    {
        return(fib_series(n - 2) + fib_series(n - 1));
    }
}
