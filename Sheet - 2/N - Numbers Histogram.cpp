#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main() {
    char sign;
    long long array_size, number;
    cin >> sign >> array_size;
    long long list1[array_size];
    for (int i = 0; i < array_size; i++){
        cin >> number;
        list1[i] = number;
    }

    for(int loop = 0; loop < array_size; loop++){
        for(int x = 0; x <list1[loop]; x++){
            cout << sign;
        }
        cout << "\n";
    }

    return 0;
}