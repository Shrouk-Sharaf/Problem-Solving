// https://codeforces.com/group/bmMQ9syPqS/contest/545102/problem/O
#include <iostream>
using namespace std;
int main() {
    string s, f_num, s_num;
    char sign;
    cin >> s;
    bool found = false;
    for(int i = 0; i < s.length(); ++i){
        if(!found && s[i] != '*' && s[i] != '+' && s[i] != '-' && s[i] != '/') f_num.push_back(s[i]);
        else if (!found && (s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/')) {
            sign = s[i];
            found = true;
        }
        else s_num.push_back(s[i]);
    }
    int num1 = stoi(f_num), num2 = stoi(s_num);
    if (sign == '*') cout << num1 * num2 << endl;
    else if (sign == '+') cout << num1 + num2 << endl;
    else if (sign == '-') cout << num1 - num2 << endl;
    else if (sign == '/') cout << num1 / num2 << endl;
}
