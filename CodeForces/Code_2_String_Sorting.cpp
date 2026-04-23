// Code 2: String Sorting
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        sort(n.begin() + 1, n.end());
        string w = n;
        sort(w.begin(), w.end());
        if (w == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
