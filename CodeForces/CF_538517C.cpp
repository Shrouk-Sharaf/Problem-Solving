// https://codeforces.com/group/Rilx5irOux/contest/538517/problem/C
#include <iostream>
using namespace std;
int main() {
    long long N;
    // "aaab"
    cin >> N;
    // 5       6        7         9           10            11          12
    // aaaba , aaabaa , aaabaaa , aaabaaaba , aaabaaabaa , aaabaaabaaa , aaabaaabaaab
    // aabaa , aabaaa , aabaaab , aabaaabaa , aabaaabaaa , aabaaabaaab , aabaaabaaaba
    // abaaa , abaaab , abaaaba , abaaabaaa , abaaabaaab , abaaabaaaba , abaaabaaabaa
    long long Bs = N / 4;
    cout << Bs;
}
