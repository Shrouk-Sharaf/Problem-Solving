// https://codeforces.com/problemset/problem/116/A
#include <iostream>
using namespace std;
int main() {
    int n;
    int cap = 0;
    cin >> n;
    int arr[n];
    int x, y;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        cap = cap - x;
        cap = cap + y;
        arr[i] = cap;
    }
    int maxx = arr[0];
    for (int i = 0; i < n ; ++i){
        if (arr[i] > maxx) maxx = arr[i];
    }
    cout << maxx;
}
