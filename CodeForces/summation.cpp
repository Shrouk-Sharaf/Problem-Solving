// summation
#include <iostream>
#include <string>
using namespace std;
int main() {
    long long n;
    long long sum = 0;
    string p;
    cin >> n;
    cin.ignore();
    getline(cin, p);
    for (long long i = 0; i < n ; ++i) {
        sum += p[i] - '0';
    }
    cout << sum;
    return 0;
}
