// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
#include <iostream>
using namespace std;
int main(){
    int n, times = 0;
    bool ok = true;
    cin >> n;
    long long array[n];
    for(int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    while(ok){
        for(int i = 0; i < n; ++i){
            if (array[i] % 2 != 0)
                ok = false;
        }
        if (ok){
            for(int i = 0; i < n; ++i){
                array[i] /= 2;
            }
            ++times;
        }
    }
    cout << times;
}
