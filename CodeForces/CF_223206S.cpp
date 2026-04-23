// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/S
#include <iostream>
using namespace std;
int main() {
    int n, k, sum = 0;
    cin >> n >> k;
    while(n--) {
        string num;
        cin >> num;
        bool found[10] = {false};
        for (char c : num) found[c - '0'] = true;
        bool is_good = true;
        for (int digit = 0; digit <= k; ++digit) {
            if (!found[digit]) {
                is_good = false;
                break;
            }
        }
        if (is_good) sum++;
    }
    cout << sum << endl;
}
