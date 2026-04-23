// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
#include <iostream>
#define intt long long
using namespace std;
intt power(intt X, intt power) {
    intt result = 1;
    for (intt i = 0; i < power; ++i)
        result *= X;
    return result;
}
intt equation(intt X, intt N) {
    intt sum = 0;
    if (N == 0) sum = power(X, 0) - 1;
    else {
        sum += power(X, 0) - 1;
        for (intt i = 2; i <= N; i += 2)
            sum += power(X, i);
    }
    return sum;
}
int main() {
    intt X, N;
    cin >> X >> N;
    cout << equation(X, N) << endl;
}
