// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double x, p, Op = 0;
    cin >> x >> p;
    Op = p / (1 - (x/100));
    cout << fixed << setprecision(2) << Op;
}
