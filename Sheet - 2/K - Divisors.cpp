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
    
    long long number1, number2;
    cin >> number1 >> number2;
    long long result = min(number1, number2); 

    while (result > 0) { 
        if (number1 % result == 0 && number2 % result == 0) { 
            break; 
        } 
        result--; 
    } 
    cout << result << endl;
    return 0; 
} 
   
