// https://codeforces.com/problemset/problem/59/A
#include <iostream>
using namespace std;
int main() {
    string w;
    int small = 0 , capital = 0;
    cin >> w;
    for(int i = 0; i < w.length(); i++){
        if (islower(w[i])) small++;
        else capital++;
    }
    if(small > capital || small == capital) for(int i = 0; i < w.length(); i++) cout << char(tolower(w[i]));
    else if(small < capital) for(int i = 0; i < w.length(); i++) cout << char(toupper(w[i]));
}
