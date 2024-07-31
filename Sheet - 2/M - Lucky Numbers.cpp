#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>
#include <vector>
#include <array>

using namespace std;

int main()
{
    long long beginner, end, modul, current, looper, checker, index = 0;
    cin >> beginner >> end;
    long long arr1[end];

    for (current = beginner; current <= end; current++)
    {
        checker = current;
        while (checker != 0)
        {
            if (checker % 10 == 4 || checker % 10 == 7)
            {
                checker = checker / 10;
            }
            else
            {
                break;
            }
        }
        if (checker == 0)
        {
            arr1[index] = current;
            index += 1;
        }
    }
    if (index == 0)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < index; i++)
        {
            cout << arr1[i] << " ";
        }
    }

    return 0;
}
