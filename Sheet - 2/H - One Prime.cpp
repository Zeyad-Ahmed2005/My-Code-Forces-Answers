#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>

using namespace std;

int main() {
    long long number;
    long long devisior;
    cin >> number;

    if (number < 2) {
        cout << "NO" << endl;
    }
    else if (number == 2 || number == 3) {
        cout << "YES" << endl;
    }
    else if(number > 3){
        long long half = number / 2;
        for(long long i = half; i > 1; i--){
            if(number % i == 0){
                cout << "NO" << endl;
                return 0;
            }
            devisior = i;
        }
        if(number % devisior != 0){
            cout <<"YES" << endl;
            }
    }
    

    return 0;
}