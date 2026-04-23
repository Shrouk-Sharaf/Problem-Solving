// https://codeforces.com/group/pKuPth1CKi/contest/486236/problem/B
// Extraaaaaaaaaa hard
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<string> players(n);
        for(int i = 0; i < n; i++) cin >> players[i];
        vector<int> target_scores(m);
        for(int i = 0; i < m; i++) target_scores[i] = 1;
        bool can_win = true;
        for(int i = 1; i < n; i++) {
            int mahmoud_score = 0, other_score = 0;
            for(int j = 0; j < m; j++) {
                if(players[0][j] == '1') mahmoud_score += target_scores[j];
                if(players[i][j] == '1') other_score += target_scores[j];
            }
            if(other_score >= mahmoud_score) {
                can_win = false;
                break;
            }
        }
        if(can_win) {
            cout << "YES\n";
            for(int i = 0; i < m; i++) cout << target_scores[i] << (i == m-1 ? '\n' : ' ');
        } else cout << "NO\n";
    }
}
