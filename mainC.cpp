#include <iomanip>
#include <vector>
#include <iostream>
int main()
{
    int n = 0;

    std::cout << "Type in the a list of numbers to input into a vector" << std::endl;

    std::vector<int> vect;
    for (int i = 1; i <= 5; i++)
    {

        std::cin >> n;
        vect.push_back(n);
    }
    std::cout << vect[0] << vect[1] << vect[2] << vect[3] << vect[4];
}

int Largest_sum(int vect[], int n)
{
    int b = 0;
    int e = 1;
    for (int i = 0; i <= (n - 1); i++)
    {
        for (int j = (i + 1); j <= n++ j; j++)
        {
            if (sum(i, j))
                > sum(b, e)
                {
                    b = i;
                    e = j;
                }
        }
    }
}