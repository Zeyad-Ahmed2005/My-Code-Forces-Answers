#include <iostream>
#include<algorithm>
#include <cmath>
#include <array>
#include <stdio.h>
#include <string>
#include <cctype>
#include <iomanip>
 
using namespace std;
 
int main() {
    long double total_after, discount, total_before;
    cin >> discount >> total_after;;
    total_before = total_after / (1 - (discount / 100.0));
    cout << total_before;
    return 0;
}