// https://codeforces.com/group/sEYb6nV9FM/contest/543085/problem/A
#include <iostream>
using namespace std;
int main() {
    int n, s, ones = 0, twos = 0, threes = 0, fours = 0;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s == 1) ones++; // 1
        else if (s == 2) twos++; // 1
        else if (s == 3) threes++; // 2
        else fours++; // 1
    }
    // 1 2 4 3 3
    int taxis = fours + threes + (twos + 1) / 2;  // Groups of 4, 3, and 2
              // 1 + 2 + (1 + 1) / 2 = 4
    ones -= min(ones, threes);  // Each group of 3 can take one group of 1
    if (twos % 2) ones = max(0, ones - 2);  // One remaining group of 2 can take two 1s
    taxis += (ones + 3) / 4;  // Groups of 1 need taxis
    cout << taxis;
}
