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
    int greatest, number;
    cin >> greatest >> number;
    int counter = 0;
    for(int x = 0; x <= greatest; x++){
        for (int y = 0; y <= greatest; y++){
            if (number - x - y >= 0 && number - x - y <= greatest){
                counter++;
            }
        }
    }
    cout << counter << endl;
    return 0;
}
