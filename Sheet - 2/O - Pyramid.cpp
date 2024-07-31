#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>
#include <vector>
 
using namespace std;
 
int main() {
    long long input;
    cin >> input;
    for(int i = 1; i <= input; i++){
        for(int k = 0; k < i; k++){
            cout << "*";
        }
        cout <<"\n"; 
    }
    return 0;
}