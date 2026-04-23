// https://vjudge.net/contest/657513#problem/G  // 800
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int round_bracket_pairs = 0, square_bracket_pairs = 0, open_round = 0, open_square = 0;
        for (char c : s) {
            if (c == '(') open_round++;
            else if (c == ')') {
                if (open_round > 0) {
                    round_bracket_pairs++;
                    open_round--;
                }
            }
            else if (c == '[') open_square++;
            else if (c == ']') {
                if (open_square > 0) {
                    square_bracket_pairs++;
                    open_square--;
                }
            }
        }
        cout << (round_bracket_pairs + square_bracket_pairs) << endl;
    }
}
