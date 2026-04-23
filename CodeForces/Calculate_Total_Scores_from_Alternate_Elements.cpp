// Calculate Total Scores from Alternate Elements
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t, n, num;
    cin >> t;
    while (t >0) {
        int score = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> num;
            arr[i] = num;
        }
        for (int j = 0; j < n; j += 2) {
            score += ceil((arr[j] + arr[j + 1]) / 2.0);
        }
        --t;
        cout << score << endl;
    }
    cout << ceil(8.01);
    return 0;
}
