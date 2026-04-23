// https://vjudge.net/contest/657513#problem/C
#include <iostream>
#include <deque>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    deque<int> dq(n);
    int arr[q];
    for(int i = 0; i < n; ++i) cin >> dq[i];
    for(int i = 0; i < q; ++i) cin >> arr[i];
    for(int i = 0; i < q; ++i) {
        for(int j = 0; j < n; ++j) {
            if(arr[i] == dq[j]) {
                cout << j + 1 << " ";
                dq.push_front(dq[j]);
                dq.erase(dq.begin() + j + 1);
                break;
            }
        }
    }
}
