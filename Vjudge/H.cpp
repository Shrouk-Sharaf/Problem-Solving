// https://vjudge.net/contest/657513#problem/H
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    stack<int> s;
    stack<int> maxStack;
    vector<int> results;
    while (n--) {
        int type;
        cin >> type;
        if (type == 1) {
            int x;
            cin >> x;
            s.push(x);
            if (maxStack.empty() || x >= maxStack.top()) maxStack.push(x);
        }
        else if (type == 2) {
            if (!s.empty()) {
                if (s.top() == maxStack.top()) maxStack.pop();
                s.pop();
            }
        }
        else if (type == 3) if (!maxStack.empty()) results.push_back(maxStack.top());
    }
    for (int result : results) cout << result << endl;
}
