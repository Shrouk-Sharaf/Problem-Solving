// Directions array to check all 8 neighbors
    int directions[8][2] = {{-1, -1}, {-1, 0}, {-1, 1},
                            {0, -1}, {0, 1},
                            {1, -1}, {1, 0}, {1, 1}};
    for (int i = 0; i < 8; ++i) {
        int newX = X + directions[i][0];
        int newY = Y + directions[i][1];
        // Check if the new position is within the boundaries of the array
        if (newX >= 0 && newX < N && newY >= 0 && newY < M) {
            if (arr[newX][newY] != 'x') {
                ok = false;
                break;
            }
        }
    }
    if (ok)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, min;
    cin >> n;
    int arr[n], newarr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        newarr[i] = arr[i];
    }
    sort(newarr , newarr+ n);
    min = newarr[0];
    cout << min << " ";
    for (int i = 0; i < n; i++){
        if (min == arr[i]){
            cout << i+1;
            break;
        }
    }
}
