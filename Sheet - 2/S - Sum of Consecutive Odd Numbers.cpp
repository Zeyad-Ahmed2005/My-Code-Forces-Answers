#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    long long number1, number2, sum = 0, steps = 0, steps_end;
    cin >> steps_end;
    cin >> number1 >> number2;
    for (steps = 1; steps <= steps_end; steps++)
    {

        if (number1 < number2)
        {
            for (long long i = number1 + 1; i < number2; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
            cout << sum << endl;
            if (steps == steps_end)
            {
                return 0;
            }
        }
        else
        {
            for (long long i = number2 + 1; i < number1; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
            cout << sum << endl;
            if (steps == steps_end)
            {
                return 0;
            }
        }
        sum = 0;
        cin >> number1 >> number2;
    }
    return 0;
}