// Searching
#include<iostream>
using namespace std;
int main() {
    long long n, find , place;
    cin >> n;
    bool flag = true;
    long long p[n];
    for (int i =0 ; i < n ;++i){
        cin >> p[i];
    }
    cin >> find;
    for (int j = 0; j < n-1 ; ++j){
        if (find == p[j]){
            flag = true;
            place = j;
            break;
        }
        else
            flag = false;
    }
    if (flag){
        cout << place;
    }
    else
        cout << -1;
}
