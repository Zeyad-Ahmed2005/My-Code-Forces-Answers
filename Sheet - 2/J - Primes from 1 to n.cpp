#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>

using namespace std;

int prime(long long number){
    long long devisior;

    if (number < 2) {
        return 0;
    }
    else if (number == 2 || number == 3) {
        cout << number << " ";
    }
    else if(number > 3){
        long long half = number / 2;
        for(long long i = half; i > 1; i--){
            if(number % i == 0){
                return 0;
            }
            devisior = i;
        }
        if(number % devisior != 0){
            cout << number << " ";
            }
    }
    

    return 0;
}

int main(){
    long long final_number;
    long long number;
    cin >> final_number;
    for (number = 1; number <= final_number; number++){
        prime(number);
    }
}