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
    int counter;
    cin >> counter;
    for (int i = 1; i <= counter; i++) {
        string number;
        cin >> number;
        int size = number.size();
        for (int z = size - 1; z >= 0; z--) {
            cout << number[z] << " ";
        }
        cout << endl;
    }
    return 0;
}