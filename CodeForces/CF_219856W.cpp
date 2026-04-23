// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/W
#include <iostream>
using namespace std;
int main(){
    string s, key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-"*"/";   // remove "" around *
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int q;
    cin >> q;
    cin >> s;
    if (q == 1){
        for (int i = 0; i < s.length(); ++i){
            for (int j = 0; j < Original.length(); ++j)
                if (s[i] == Original[j]) cout << key[j];
        }
    }
    else{
        for (int i = 0; i < s.length(); ++i){
            for (int j = 0; j < key.length(); ++j)
                if (s[i] == key[j]) cout << Original[j];
        }
    }
}
