// https://codeforces.com/problemset/problem/1999/C
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    vector<pair<int, int>> v;
    for(int i = 1; i <= a; i++) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        v.push_back({temp1, temp2});
    }
    sort(v.begin(),v.end());
    int innit = v[0].first;
    if (innit >= b){
        cout << "YES" << endl;
        return;
    }
    int last = v[0].second;
    for(int i = 1; i < a; i++) {
        if(v[i].first > last){
            if(v[i].first-last >= b){
                cout << "YES" << endl;
                return;
            }
        }
        last = max(last,v[i].second);
    }
    if(c-last >= b){
        cout << "YES" << endl;
        return;
    }
    else
        cout << "NO" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
