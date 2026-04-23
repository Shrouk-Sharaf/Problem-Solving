// https://vjudge.net/contest/657513#problem/I
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    vector<int> num;
    queue<int> q;
    int x = 0;
    while (true) {
        cin >> x;
        if (x == 0) break;
        num.push_back(x);
    }
    for (int i = 0; i < num.size(); i++) {
        int n = num[i];
        vector<int> discarded_cards;
        for (int j = 1; j <= n; j++) q.push(j);
        while (q.size() > 1) {
            discarded_cards.push_back(q.front());
            q.pop();
            q.push(q.front());
            q.pop();
        }
        int last_remaining_card = q.front();
        cout << "Discarded cards:";
        if (!discarded_cards.empty()) for (size_t k = 0; k < discarded_cards.size(); k++) cout << (k == 0 ? " " : ", ") << discarded_cards[k];
        cout << endl;
        cout << "Remaining card: " << last_remaining_card << endl;
        while (!q.empty()) q.pop();
    }
}
