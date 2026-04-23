// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/R
#include <iostream>
using namespace std;
int main() {
    int n, score = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i) {
        switch (s[i]) {
            case 'V':
                score += 5;
                break;
            case 'W':
                score += 2;
                break;
            case 'X':
                if (i != n - 1) s[i + 1] = '0';
                break;
            case 'Y':
                if (i != n - 1) {
                    s.push_back(s[i + 1]);
                    s[i + 1] = '0';
                    ++n;
                }
                break;
            case 'Z':
                if (i != n - 1) {
                    if (s[i + 1] == 'V') {
                        score /= 5;
                        s[i + 1] = '0';
                    } else if (s[i + 1] == 'W') {
                        score /= 2;
                        s[i + 1] = '0';
                    }
                }
                break;
        }
    }
    cout << score;
}
