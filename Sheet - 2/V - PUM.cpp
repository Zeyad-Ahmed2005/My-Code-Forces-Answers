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
    long long lines = input *4;

    for(int i = 1; i <= lines; i++){
        if(i % 4 == 0){
            cout << "PUM" << "\n";
        }
        else{
            cout << i << " ";
        }
    }
    return 0;
}