//https://codeforces.com/contest/1526/problem/C2
#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
int main(){
    ll n, health = 0, result = 0;
    cin >> n;
    vector<ll> potion(n);
    for(ll i = 0; i < n; i++) cin >> potion[i];
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i = 0; i < n; i++) {
        health += potion[i];
        pq.push(potion[i]);
        result++;
        if (health < 0) {
            health -= pq.top();
            pq.pop();
            result--;
        }
    }
    cout << result << endl;
}
