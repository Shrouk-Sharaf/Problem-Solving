// https://codeforces.com/problemset/problem/2010/A
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        long long n, sum = 0;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) sum += (a[i] * pow(-1, i));
        cout << sum << endl;
    }
}
