#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int input;
    cin >> input;
    int temp = input;
    int revNum = 0;
    int rem;
    while(!temp==0)
    {
        rem = temp%10;
        revNum= revNum*10+rem;
        temp=temp/10;
    }
    if(input==revNum){
        cout<< revNum << "\n"<<"YES" << endl ;
    }
    else{    
        cout << revNum << "\n"<< "NO"<< endl;
    }
    return 0;
}

