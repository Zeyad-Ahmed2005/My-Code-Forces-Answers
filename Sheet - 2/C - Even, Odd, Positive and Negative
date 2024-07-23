#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>
 
using namespace std;
int main() {
    int array_size, pos=0, neg=0, even=0, odd=0;
    cin >> array_size;
    int numbers[array_size];

    for (int i = 0; i < array_size; i++) {
        cin >> numbers[i];
    }
    for (int i = 0; i < array_size; i++) {
        if(numbers[i] > 0){
            pos++;
        }
        else if(numbers[i] < 0){
            neg++;
        }
        if(numbers[i] % 2 == 0){
            even++;
        }
        else if(numbers[i] % 2 != 0){
            odd++;
        }
    }

    cout <<"Even: " << even << endl << "Odd: " << odd << endl << "Positive: " << pos << endl << "Negative: " << neg << endl;
    
    return 0;
}
