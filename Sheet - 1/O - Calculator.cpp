#include <iostream>
#include <cmath>
#include <array>
#include <stdio.h>
#include <string>
#include <cctype>
 
using namespace std;
int main()
{
    long long a,b, sum = 0;
    char s;
    
    cin >> a >> s >>b;
    
    if (s == '+'){
        sum = a + b;
        cout << sum;
    }
    else if (s == '-'){
        sum = a - b;
        cout << sum;
    }
    else if (s == '*'){
        sum = a * b;
        cout << sum;
    }
    else{
        sum = a/b;
        cout << sum;
    }
    return 0;
}
