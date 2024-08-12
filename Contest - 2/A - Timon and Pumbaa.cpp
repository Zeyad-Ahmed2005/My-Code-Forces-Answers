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
    long long a_candy, b_candy;
    cin >> a_candy >> b_candy;

    if(a_candy - b_candy >=0){
        cout << a_candy - b_candy << endl;
    }
    else{
        cout << 0;
    }
    return 0;
}