// Code 10: Factorial Calculation
#include <iostream>
using namespace std;
unsigned long long factorial(unsigned long long n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    unsigned long long a, b;
    cin >> a >> b;
    if (a > b)
        cout << factorial(b);
    else
        cout << factorial(a);
}
