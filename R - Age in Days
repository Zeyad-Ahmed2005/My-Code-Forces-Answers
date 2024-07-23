#include <iostream>
#include <cmath>
#include <array>
#include <stdio.h>
#include <string>
#include <cctype>
 
using namespace std;
int main()
{
    long long n, days = 0, months = 0, years = 0;
    bool x = true;
    cin >> n;
    while (x){ 
        if (n >= 365){
            n = n - 365;
            years +=1;
        }
        else if (n >=30){
            n = n - 30;
            months += 1;
        }
        else if (n < 30){
            days = days + n;
            n = n - n;
            x = false;
        }
    }
    cout << years << " years\n" << months << " months\n" << days << " days";
    return 0;
}
