#include <iostream>
int main()
{
    // Get user input
    int n;
    std::cout << "Enter a number" << std::endl;
    std::cin >> n;

    int fib = 0;
    int F1 = 0;
    int F2 = 1;

    if (n <= 1)
    {
        return n;
    }
    else
    {
        std::cout << F1 << ", ";
        for (int i = 1; i < n; i++)
        {
            std::cout << F2 << ", ";
            int next = F1 + F2;
            F1 = F2;
            F2 = next;
        }
    }
}
