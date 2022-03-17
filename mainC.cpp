#include <bits/stdc++.h>

int Largest_sum(std::vector<int> vect, int n)
{
    int b = 0;
    int e = 1;
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            for (int i = 0; i < 5; i++)
            {
                sum += numbers[i];
            }
            if ((i + j) > (b + e))
            {
                b = i;
                e = j;
            }
        }
    }
    return (b, e);
}

int main()
{
    int n = 0;
    std::cout << "How many elements in the do you want in the vector" << std::endl;
    std::cin >> n;

    std::cout << "Type in the a list of numbers to input into a vector" << std::endl;
    int ele = 0;

    std::vector<int> vect;
    for (int i = 1; i <= 8; i++)
    {

        std::cin >> ele;
        vect.push_back(ele);
    }
    // std::cout << vect[0] << vect[1] << vect[2] << vect[3] << vect[4] << std::endl;
    Largest_sum(vect, n);
    for (int i = 0; i < vect.size(); i++)
    {
        std::cout << vect.at(i) << ' ';
    }
}