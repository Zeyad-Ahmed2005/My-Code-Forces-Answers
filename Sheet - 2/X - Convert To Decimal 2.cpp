#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int decimal_to_binary(int number)
{
    int binary_num = 0;
    int i = 0;
    while (number > 0)
    {
        binary_num += (number % 2) * pow(10, i);
        number /= 2;
        i++;
    }
    return binary_num;
}

int zero_remover(int binary_num)
{
    int zeroed = 0, counter = 1, indented;
    while (binary_num > 0)
    {
        if (binary_num % 10 == 0)
        {
            binary_num = binary_num / 10;
        }
        else if (binary_num % 10 == 1)
        {
            indented = binary_num % 10;
            zeroed = zeroed + (indented * counter);
            counter = counter * 10;
            binary_num = binary_num / 10;
        }
    }
    return zeroed;
}

int binary_to_decimal(int zeroed)
{
    int power = 0, sum = 0;
    while (zeroed > 0)
    {
        zeroed = zeroed / 10;
        power = power + 1;
    }
    for (int i = power - 1; i > -1; i--)
    {
        sum = sum + pow(2, i);
    }
    return sum;
}

int main()
{
    int tries;
    cin >> tries;
    for (int i = 0; i < tries; i++)
    {
        int number, binary_num, zeroed;
        cin >> number;
        binary_num = decimal_to_binary(number);
        zeroed = zero_remover(binary_num);
        number = binary_to_decimal(zeroed);
        cout << number << endl;
    }
    return 0;
}