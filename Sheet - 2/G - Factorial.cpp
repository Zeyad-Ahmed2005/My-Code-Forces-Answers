#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>

using namespace std;

int main() {
    long long n;
    long long sum = 1;

    cin >> n;
    long long arr [n];
    for (long long i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (long long j = 0; j < n; j++){
        long long k = arr[j];
        for (long long l = 1 ; l <= k; l++){
            sum *= l;
        }
    cout << sum << endl;
    sum = 1;
    }

    return 0;
}