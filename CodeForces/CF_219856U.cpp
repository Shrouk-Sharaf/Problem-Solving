// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    string s, word = "egypt";
    cin >> s;
    map<char, int> counter;
    for (char c : word) {
        counter[c] = 0;
    }
    for (char c : s) {
        if (counter.count(tolower(c))) counter[tolower(c)]++;
    }
    int mini = counter[word[0]];
    for (char c : word) {
        mini = min(mini, counter[c]);
    }
    cout << mini << endl;
}
