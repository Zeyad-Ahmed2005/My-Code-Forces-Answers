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
    long long number1, number2, sum = 0;
    cin >> number1 >> number2;
    while (number1 > 0 && number2 > 0)
    {

        if (number1 < number2)
        {
            for (long long i = number1; i <= number2; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
        }
        else
        {
            for (long long i = number2; i <= number1; i++)
            {
                cout << i << " ";
                sum += i; 
            }
            cout << "sum =" << sum << endl;
        }

        sum = 0;
        cin >> number1 >> number2;
    }
    return 0;
}