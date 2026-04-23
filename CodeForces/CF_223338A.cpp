// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/A
#include <iostream>
#include <cmath>
using namespace std;
bool is_power_of_two(long long n){
    if(floor(log2(n)) == log2(n))
        return true;
    return false;
}
int main(){
    long long n;
    cin >> n;
    cout << (is_power_of_two(n) ? "YES" : "NO");
}
