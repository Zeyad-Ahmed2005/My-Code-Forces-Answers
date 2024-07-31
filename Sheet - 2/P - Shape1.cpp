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
    for(int i = input; i >= 1; i--){
        for(int k = i; k > 0; k--){
            cout << "*";
        }
        cout <<"\n"; 
    }
    return 0;
}