#include <iostream>
#include<algorithm>
#include <cmath>
#include <array>
#include <string>
#include <cctype>
 
using namespace std;
 
int main() {
    long long eyes, mouth, body, statues, total_statues;
 
    cin >> eyes >> mouth >> body;
    statues = min({eyes, mouth, body});
    total_statues += statues;
    eyes -= statues;
    mouth -= statues;
    body -= statues;
    statues = min((eyes/2),body);
    total_statues += statues;
    cout << total_statues;
    return 0;
}