#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int fib(long long number)
{
    long long a, b, c;
    a = 0;
    b = 1;

    for (int i = 0; i < number; i++)
    {
        if (i == 0)
        {
            cout << 0 << " ";
        }
        else if (i == 1)
        {
            cout << 1 << " ";
        }

        else
        {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }
    return 0;
}
int main()
{
    long long number;
    cin >> number;
    fib(number);
    return 0;
}