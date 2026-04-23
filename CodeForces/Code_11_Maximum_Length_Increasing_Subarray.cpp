// Code 11: Maximum Length Increasing Subarray
#include <iostream>
using namespace std;
int main(){
    long long n, counter = 1, maxL = 1;
    cin >> n;
    long long p[n];
    for (long long i = 0; i < n; ++i) {
        cin >> p[i];
    }
    for(int j = 1; j < n ; ++j){
        if (p[j] >= p[j - 1])
            counter += 1;
        else
            counter = 1;
        maxL = max(maxL, counter);
    }
    cout << maxL << endl;
}
