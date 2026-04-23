// Code 6: Recursive Function
#include <iostream>
#include <cmath>
using namespace std;
int rabe3(long long weight, long long max) {
    if (weight <= max)
        return 1;
    else {
        long long x = ceil(weight / 2.0), y = floor(weight / 2.0);
        if(x == y){
            long long split1 = rabe3(x, max);
            return 2 * split1;
        }
        else{
            long long split1 = rabe3(x, max);
            long long split2 = rabe3(y, max);
            return split1 + split2;
        }
    }
}
int main() {
    long long T, n, m;
    cin >> T;
    for (long long t = 0; t < T; ++t) {
        cin >> n >> m;
        cout << rabe3(n, m) << endl;
    }
}
