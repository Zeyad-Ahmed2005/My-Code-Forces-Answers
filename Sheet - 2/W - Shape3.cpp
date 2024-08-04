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
    int layers;
    cin >> layers;
    for (int i = 0; i < layers; i++)
    {
        for (int j = 0; j < layers - i - 1; j++)
            cout << " ";
        for (int j = 0; j <= 2 * i; j++)
            cout << "*";

        cout << endl;
    }
    for (int i = layers - 1; i > 0; i--)
    {
        for (int j = layers - i - 1; j > 0; j--)
            cout << " ";
        for (int j = 2 * i; j >= 0; j--)
            cout << "*";
        cout << endl;
    }
    for (int j = 0; j < layers - 1; j++)
    {
        cout << " ";
    }
    cout << "*";
    return 0;
}