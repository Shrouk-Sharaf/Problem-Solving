// https://vjudge.net/contest/657513#problem/T    //800
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, sereja = 0, dima = 0;
    bool serejaturn = true;
    cin >> n;
    int left = 0, right = n - 1;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    while (left <= right){
        if (v[left] > v[right]){
            if(serejaturn) sereja += v[left];
            else dima += v[left];
            ++left;
        }
        else{
            if(serejaturn) sereja += v[right];
            else dima += v[right];
            --right;
        }
        serejaturn =!serejaturn;
    }
    cout << sereja << " " << dima;
}
