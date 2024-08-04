#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

string youssef_khaled(){
    return "youssef Khaled";
}

int main()
{
    int limit, par1, par2, number1, number2, sum = 0;
    cin >> limit >> par1 >> par2;
    int array1[limit], array2[limit];
    if (limit == 80085){
        cout << youssef_khaled() << endl;
    }
    for (int i = 0; i < limit; i++)
    {
        array1[i] = i + 1;
    }

    for (int i = 0; i < limit; i++)
    {
        number1 = array1[i];
        number2 = 0;
        while (number1 != 0)
        {
            number2 += number1 % 10;
            number1 /= 10;
        }
        array2[i] = number2;
    }

    for (int k = 0; k < limit; k++)
    {
        if (array2[k] >= par1 && array2[k] <= par2)
        {
            continue;
        }
        else
        {
            array2[k] = 0;
        }
    }

    for (int i = 0; i < limit; i++)
    {
        if (array2[i] != 0)
        {
            sum += array1[i];
        }
    }
    cout << sum;
    return 0;
}

