#include <iostream>
#include<algorithm>
#include <cmath>
#include <array>
#include <stdio.h>
#include <string>
#include <cctype>
 
using namespace std;
 
int main() {
    long long memo, momo, k;
    cin >> memo >> momo >> k;
 
    if(memo % k == 0 && momo % k == 0){
        cout << "Both";
 
    }
    else if(memo % k == 0 && momo % k != 0){
        cout << "Memo";
    }
    else if(memo % k != 0 && momo % k == 0){
        cout << "Momo";
    }
    else{
        cout << "No One";
    }
 
    return 0;
}