// https://vjudge.net/contest/657513#problem/O
#include <iostream>
#include <deque>
using namespace std;
int main() {
    string S, T;
    cin >> S >> T;
    deque<char> dq(S.begin(), S.end());
    for (int i = 0; i < S.length(); i++) {
        if (deque<char>(dq.begin(), dq.end()) == deque<char>(T.begin(), T.end())) {
            cout << "Yes" << endl;
            return 0;
        }
        dq.push_back(dq.front());
        dq.pop_front();
    }
    cout << "No" << endl;
}
