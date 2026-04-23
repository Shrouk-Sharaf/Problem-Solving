// https://codeforces.com/contest/1992/problem/A
#include <iostream>
using namespace std;
int main(){
    int a, b , c, T;
    cin >> T;
    while(T--){
        cin >> a >> b >> c;
        int times = 5;
        while(times--){
            if (a <= b && a <= c)
                ++a;
            else if (b <= a && b <= c)
                ++b;
            else if (c <= a && c <= b)
                ++c;
        }
        cout << a * b * c << endl;
    }
}
