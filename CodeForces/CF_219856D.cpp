// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
#include <iostream>
using namespace std;
int main() {
    string A, B;
    getline(cin, A);
    getline(cin, B);
    cout << A.length() << " " << B.length() << endl << A + B << endl;
    cout << B[0] << A.substr(1) << " " << A[0] << B.substr(1) << endl; // we can use sap function swap(s[0],s1[0]);
}
