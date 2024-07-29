#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>
 
using namespace std;
int main() {
    long long x,i;
    cin >> x;
    if(x == 1) cout << -1;
    for (  i = 1; i <= x; i ++)
    {
        if(i%2==0){
            cout << i << endl;
        }
        else {
            continue;
        }
     }

    return 0;
}
