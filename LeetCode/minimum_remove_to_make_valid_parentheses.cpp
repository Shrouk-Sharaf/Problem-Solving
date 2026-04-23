// https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/description/?envType=daily-question&envId=2024-09-02
#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    string result;
    int balance = 0;
    for (char c : s) {
        if (c == '(') balance++;
        else if (c == ')') {
            if (balance == 0) continue;
            balance--;
        }
        result += c;
    }
    cout << result << endl;
    string finalResult;
    for (char c : result) {
        if (c == '(' && balance-- > 0) continue;
        finalResult += c;
    }
    cout << finalResult;
}
