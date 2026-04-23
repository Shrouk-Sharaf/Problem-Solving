// https://codeforces.com/problemset/problem/2009/A
#include <iostream>
using namespace std;
int main() {
    int a, b, T;
    cin >> T;
    while(T--){
        int minn = 1e9;
        cin >> a >> b;
        for(int i = a; i <= b; i++){
            if((i-a)+(b-i) < minn) minn =(i-a)+(b-i);
        }
        cout << minn << endl;
    }
}
