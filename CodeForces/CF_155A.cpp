// https://codeforces.com/problemset/problem/155/A
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int contests, Acontests =  0;
    cin >> contests;

    vector<int> arr(contests);

    for (int i = 0; i < contests; ++i) {
        cin >> arr[i];
    }

    int best = arr[0], worst = arr[0];

    for (int i = 1; i < contests; ++i) {
        if (arr[i] > best) {
            Acontests++;
            best = arr[i];
        }
        if (arr[i] < worst) {
            Acontests++;
            worst = arr[i];
        }
    }

    cout << Acontests;
}
