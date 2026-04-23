// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/G
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int main() {
    ll n, sum = 0;
    cin >> n;
    for(ll i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            sum += i;
            if(i!= sqrt(n)) sum += n/i;
        }
    }
    cout << sum << endl;
}
