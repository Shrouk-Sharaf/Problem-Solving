// https://vjudge.net/contest/657513#problem/A
#include <iostream>
#include <queue>
using namespace std;
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T, n, k;
    queue<int> q;
    cin >> T;
    while (T--){
        cin >> n;
        if(n == 1){
            cin >> k;
            q.push(k);
        }
        else if(!q.empty() && n == 2) q.pop();
        else if(n == 3){
            if(!q.empty()) cout << q.front() << '\n';
            else cout << "Empty!" << '\n';
        }
    }
}
