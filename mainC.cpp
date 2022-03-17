#include <bits/stdc++.h>

std::vector<int> Largest_sum(std::vector<int> vect, int n)
{
    std::vector<int> vect2;
    /*std::vector<int> vect2;
    for (int i = 0; i < n; i++)
    {
        vect2.push_back(int);
    }*/
    int b = 0;
    int e = 1;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            for (int i = 0; i <= j; i++)
            {
                sum1 += vect[i];
            }
            for (int b = 0; b <= e; b++)
            {
                sum2 += vect[b];
            }
            if (sum1 > sum2)
            {
                b = i;
                e = j;
            }
        }
    }
    for (int a = b; a <= e; a++)
    {
        vect2.push_back(vect[a]);
    }

    return (vect2);
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
    vect = Largest_sum(vect, n);
    // std::cout << vect[0] << vect[1] << vect[2] << vect[3] << vect[4] << std::endl;
    for (int i = 0; i < vect.size(); i++)
    {
        std::cout << vect.at(i) << ' ';
    }
}
