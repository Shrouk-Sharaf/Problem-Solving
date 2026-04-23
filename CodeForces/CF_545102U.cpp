//https://codeforces.com/group/bmMQ9syPqS/contest/545102/problem/U
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double n;
    cin >> n;
    if (ceil(n) != n || floor(n) != n) {
        cout << "float ";
        string num = to_string(n);
        int index = num.find('.');
        cout << num.substr(0, index) << " 0";
        for(int i = index; i < num.length() - index; i++)
            cout << num[i];
    }
    else cout << "int " << n;
}
