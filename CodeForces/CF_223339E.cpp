// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E
#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        string s;
        cin >> n;
        while(n > 0){
            s +=  to_string(n % 2);
            n /= 2;
        }
        for(int i = s.size() - 1; i >= 0; i--) cout << s[i];
        cout << "\n";
    }
}
