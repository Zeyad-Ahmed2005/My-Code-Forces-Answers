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
    long long no_of_numbers, set_of_number_size, x_input, ceiling_size;
    cin >> no_of_numbers >> set_of_number_size;

    ceiling_size = ceil((no_of_numbers + set_of_number_size - 1) / set_of_number_size);

    long long broken_lists [set_of_number_size][ceiling_size];
    
    for (int j = 0; j < set_of_number_size; j++){
        for (int k = 0; k < ceiling_size; k++){
            cin >> x_input;
            broken_lists[j][k] = x_input;
        }
    }



    return 0;
}