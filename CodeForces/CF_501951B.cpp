// https://codeforces.com/group/9w9xt8C4av/contest/501951/problem/B
#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int minutesLeft = 240 - k, timeSpent = 0, problemsSolved = 0;
    for (int i = 1; i <= n; i++) {
        timeSpent += 5 * i;
        if (timeSpent > minutesLeft) break;
        problemsSolved = i;
    }
    cout << problemsSolved;
}
