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
        cout << 1 << endl;
    }
    else if (number == 2) {
        cout << 2 << endl;
    }
    else if (number == 3){
        cout << 3 << endl;
    } 
    else if(number > 3){
        long long half = number / 2;
        for(long long i = 1; i <= half; i++){
            if(number % i == 0){
                cout << i << endl;
            }
            devisior = i;
        }
        cout << number << endl;
    }
 
    return 0;
}