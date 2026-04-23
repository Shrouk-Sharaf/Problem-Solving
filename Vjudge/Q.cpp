// https://vjudge.net/contest/657513#problem/Q
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main() {
    string s, result;
    stack<char> snew;
    cin >> s;
    for (char c : s) {
        if (c == '<' && !snew.empty()) snew.pop();
        else if (c != '<') snew.push(c);
    }

    while (!snew.empty()) {
        result += snew.top();
        snew.pop();
    }
    reverse(result.begin(), result.end());
    cout << result << endl;
}*/
