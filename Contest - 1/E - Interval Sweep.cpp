#include <iostream>
#include<algorithm>
#include <cmath>
#include <array>
#include <stdio.h>
#include <string>
#include <cctype>
 
using namespace std;
 
int main() {
    long long a,b;
 
    cin >> a >> b;
 
    if(a==1 && b==1){
        cout << "YES";
    }
    if(a >= 1 && b >= 1){
        if (a - b == 1){
            cout << "YES";
        }
        else if(b - a == 1){
            cout << "YES";
        }
        else if ( a == b){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    if(a==0 && b==0){
        cout << "NO";
    }
 
    return 0;
}