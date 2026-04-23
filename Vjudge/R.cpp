// https://vjudge.net/contest/657513#problem/R
// askkkkkkkk
#include <iostream>
#include <deque>
#define intt long long
using namespace std;
int main() {
    intt n;
    cin >> n;
    deque<pair<intt, intt>> dq;
    intt i, x, c;
    while(n--) {
        intt sum = 0;
        cin >> i;
        if (i == 1) {
            cin >> x >> c;
            if (!dq.empty() && dq.back().first == x)dq.back().second += c;
            else dq.push_back({x, c});
        }
        else if (i == 2) {
            cin >> c;
            while (c > 0) {
                if (dq.front().second <= c) {
                    sum += dq.front().first * dq.front().second;
                    c -= dq.front().second;
                    dq.pop_front();
                }
                else {
                    sum += dq.front().first * c;
                    dq.front().second -= c;
                    c = 0;
                }
            }
            cout << sum << '\n';
        }
    }
}
