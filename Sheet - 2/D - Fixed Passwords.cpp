#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>
 
using namespace std;
int main() {
    int User_input, Password = 1999;

    while(true){
        cin >> User_input;
        if(User_input == Password){
            cout << "Correct";
            break;
        }
        else{
            cout << "Wrong \n";
        }
    }
    
    return 0;
}
