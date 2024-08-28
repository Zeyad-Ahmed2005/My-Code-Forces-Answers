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
    long long size;
    cin >> size;
    char c [size][size];

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if (j == i && j == size / 2 && i == size / 2){
                c[i][j] = 'X';
            }
            else if (j == i){
                c[i][j] = '\\';
            }
            else if (j == size - 1 - i){
                c[i][j] = '/';
            }
            else{
                c[i][j] = '*';
            }
        }
    }
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}