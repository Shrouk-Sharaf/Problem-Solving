//https://codeforces.com/problemset/problem/266/B
#include <iostream>
using namespace std;
int main(){
    int n, t;
    string queue, result_queue;
    cin >> n >> t;
    cin >> queue;
    result_queue = q
    queue;
    for (int j = 0; j < t; ++j) {
        for (int i = 0; i < n; ++i) {
            if(queue[i] == 'B' && queue[i+1] == 'G'){
                swap(result_queue[i], result_queue[i+1]);
            }
        }
        queue = result_queue;
    }
    for (int i = 0; i < n; ++i) {
        cout << result_queue[i];
    }
}
