#include <iostream>
#include<algorithm>
#include <cmath>
#include <array>
#include <stdio.h>
#include <string>
#include <cctype>
 
using namespace std;
 
int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
 
    if(a + b - c == d){
        cout << "YES";
    }
    else if (a + b * c == d){
        cout << "YES";
    }
    else if (a - b + c == d){
        cout << "YES";
    }
    else if (a - b * c == d){
        cout << "YES";
    }
    else if (a * b + c == d){
        cout << "YES";
    }
    else if (a * b - c == d){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}