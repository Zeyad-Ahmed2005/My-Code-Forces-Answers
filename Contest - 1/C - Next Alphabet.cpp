#include <iostream>
#include<algorithm>
#include <cmath>
#include <array>
#include <stdio.h>
#include <string>
#include <cctype>
 
using namespace std;
 
int main() {
    char letter;
    cin >> letter;
 
    if (letter != 'z'){
        letter = letter + 1;
        cout << letter;
    }
    else{
        cout << 'a';
    }
    return 0;
}