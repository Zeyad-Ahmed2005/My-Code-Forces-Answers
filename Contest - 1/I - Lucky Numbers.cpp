#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>
 
using namespace std;
int main() {
    long long x, my_number, tu2, ut2;
    long double y, tens, unit, tu1, ut1;
    cin >> my_number;
    tens = my_number / 10;
    unit = my_number % 10;
    tu1 = tens/unit;
    tu2 = tens/unit;
    ut1 = unit/tens;
    ut2 = unit/tens;

    if(tu1 == tu2 || ut1 == ut2){ cout << "YES" << endl;}
    else{ cout << "NO" << endl;}
    return 0;
}
