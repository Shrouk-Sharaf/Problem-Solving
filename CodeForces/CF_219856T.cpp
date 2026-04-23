// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/T
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str, username, pwd, profile, role, key;
    int eq = 0;
    cin >> str;
    int size = str.length();
    for (int i = 0; i < size; i++) {
        if (str[i] == '=') {
            eq++;
            i++;
            if (eq == 1){
                while (i < str.length() && str[i] != '&' && str[i] != '=')
                    username.push_back(str[i++]);
            } else if (eq == 2) {
                while (i < str.length() && str[i] != '&' && str[i] != '=')
                    pwd.push_back(str[i++]);
            } else if (eq == 3) {
                while (i < str.length() && str[i] != '&' && str[i] != '=')
                    profile.push_back(str[i++]);
            } else if (eq == 4) {
                while (i < str.length() && str[i] != '&' && str[i] != '=')
                    role.push_back(str[i++]);
            } else if (eq == 5) {
                while (i < str.length() && str[i] != '&' && str[i] != '=')
                    key.push_back(str[i++]);
            }
        }
    }
    cout << "username: " << username << '\n' << "pwd: " << pwd << '\n' << "profile: " << profile << '\n';
    cout  << "role: " << role << '\n' << "key: " << key << '\n';
}
