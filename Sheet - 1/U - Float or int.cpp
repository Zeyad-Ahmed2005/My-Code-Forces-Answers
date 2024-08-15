#include <iostream>
#include<algorithm>
#include <cmath>
#include <array>
#include <stdio.h>
#include <string>
#include <cctype>
 
using namespace std;
int main()
{
    double x;
    cin >> x;
    int y ;
    y= int(x);
    if (y == x) { 
        cout << "int " << x; 
    } 
    else { 
        cout << "float " <<y<<" "<< x-y; 
    } 
     
    return 0; 
} 
