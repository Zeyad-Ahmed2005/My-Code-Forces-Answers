#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>
 
using namespace std;
 
int main() {
    long long sum2;
    long double n, k, a, sum1;
    cin >> n >> k >> a;
    sum1 = ((n*k)/a);
    sum2 = sum1;


    if(sum1 - sum2 != 0) {
        cout << "double";
    }
    else if( sum1 <= 2147483647 && sum1 >= -2147483648){
        cout << "int";
    }
    else if(sum1 >= 2147483647){
        cout << "long long";
    }
    return 0;
}
