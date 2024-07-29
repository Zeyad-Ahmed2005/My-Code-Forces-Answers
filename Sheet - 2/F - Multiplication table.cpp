#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < 13; i++){
        cout << n << " * " << i << " = " << n*i << endl;
    }

    return 0;
}