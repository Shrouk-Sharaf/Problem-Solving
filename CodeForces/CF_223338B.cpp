// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/B
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int main(){
    ll n;
    bool prime = true;
    cin >> n;
    if(n == 1) prime = false;
    for(ll i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            prime = false;
            break;
        }
    }
    cout << (prime? "YES" : "NO") << endl;
}
