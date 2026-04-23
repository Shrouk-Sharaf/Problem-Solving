// https://codeforces.com/problemset/problem/469/A
#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> Result;
    int p;
    cin >> p;
    for (int i = 0; i < p; ++i) {
        int level;
        cin >> level;
        Result.insert(level);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int level;
        cin >> level;
        Result.insert(level);
    }
    cout << (Result.size() == n? "I become the guy." : "Oh, my keyboard!");
}
