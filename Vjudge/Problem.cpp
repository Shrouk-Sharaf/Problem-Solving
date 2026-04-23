// https://vjudge.net/problem/SPOJ-QUEUEEZ
/*#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    queue<int> Q;

    while (n--) {
        int type, x;
        cin >> type;

        if (type == 1) {
            cin >> x;
            Q.emplace(x);
        } else if (type == 2 && !Q.empty()) {
            Q.pop();
        } else if (type == 3) {
            if (!Q.empty()) {
                cout << Q.front() << endl;
            } else {
                cout << "Empty!" << endl;
            }
        }
    }

    return 0;
}
