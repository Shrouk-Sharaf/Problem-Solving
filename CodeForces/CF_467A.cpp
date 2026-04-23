// https://codeforces.com/problemset/problem/467/A
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int res = 0;
    int x, y;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        if (y - x >= 2) res++;
    }
    cout << res;
}
