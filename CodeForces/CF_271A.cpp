// https://codeforces.com/problemset/problem/271/A
#include <iostream>
#include <set>
using namespace std;
bool hasDistinctDigits(int year) {
    string yearStr = to_string(year);
    set<char> digits(yearStr.begin(), yearStr.end());
    return digits.size() == yearStr.size();
}
int main() {
    int year;
    cin >> year;
    for (int i = year + 1; i <= 9999; ++i){
        if(hasDistinctDigits(i)){
            cout << i;
            break;
        }
    }
}
