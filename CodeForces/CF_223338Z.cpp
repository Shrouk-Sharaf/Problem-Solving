// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/Z
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int R, S;
    cin >> R >> S;
    if (2 * R <= S) cout << "Square";
    else if (2 * R >= sqrt(2) * S)  cout << "Circle";
    else cout << "Complex";
}
