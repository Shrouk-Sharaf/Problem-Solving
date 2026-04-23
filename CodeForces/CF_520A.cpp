// https://codeforces.com/problemset/problem/520/A
#include <iostream>
#include <set>
using namespace std;
int main() {
    int n;
    cin >> n;
    string sentence;
    cin >> sentence;
    if (n < 26) {
        cout << "NO" << endl;
        return 0;
    }
    else{
        set<char> alphabets;
        for (int i = 0; i < n; ++i) {
            alphabets.insert(tolower(sentence[i]));
        }
        cout << (alphabets.size() == 26 ? "YES" : "NO") << endl;
    }
}
