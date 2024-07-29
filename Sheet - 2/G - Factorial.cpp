#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int n;
    int sum = 1;

    cin >> n;
    int arr [n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++){
        int k = arr[j];
        for (int l = 1 ; l <= k; l++){
            sum *= l;
        }
    cout << sum << endl;
    sum = 1;
    }

    return 0;
}