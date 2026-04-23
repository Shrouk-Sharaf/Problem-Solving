// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
#include <iostream>
using namespace std;
int main() {
    string X, Y;
    getline(cin, X);
    getline(cin, Y);
    cout << (X < Y ? X : Y);
}
