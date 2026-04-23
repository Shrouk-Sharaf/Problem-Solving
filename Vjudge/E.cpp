// https://vjudge.net/contest/657513#problem/E   // 1400
#include <iostream>
#include <deque>
using namespace std;
int main() {
    string s;
    cin >> s;
    int matchingpairs = 0;
    deque<char> dq;
    for(char x : s){
        if(x == '(') dq.push_back(x);
        else if(x == ')' && dq.size() != 0){
            dq.pop_back();
            matchingpairs++;
        }
    }
    cout << matchingpairs * 2;
}
