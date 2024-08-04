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

    return 0;
}