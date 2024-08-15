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
    long double number_of_sums, number_1, number_2, sum = 0, i = 0, nth = 0;
    cin >> number_of_sums;
    while (i < number_of_sums)
    {
        if (number_1 < number_2)
        {
            cin >> number_1 >> number_2;
            nth = number_2 - number_1 + 1;
            sum = (nth * (number_1 + number_2)) / 2;
            cout << sum << endl;
            sum = 0;
            i++;
        }
        if (number_1 > number_2)
        {
            cin >> number_1 >> number_2;
            nth = number_1 - number_2 + 1;
            sum = (nth * (number_1 + number_2)) / 2;
            cout << sum << endl;
            sum = 0;
            i++;
        }
    }
    return 0;
}
