// https://codeforces.com/problemset/problem/144/A
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);

    for (int i = 0; i < n; ++i) cin >> heights[i];

    int leftMax = *max_element(heights.begin(), heights.end());
    int leftPos = 0;
    for (int i = 0; i < n; ++i) {
        if(leftMax == heights[i]){
            leftPos = i;
            break;
        }
    }

    int rightMin = *min_element(heights.begin(), heights.end());
    int rightPos = n - 1;
    for (int i = n-1; i >= 0; --i) {
        if(rightMin == heights[i]){
            rightPos = i;
            break;
        }
    }
    int swaps = leftPos + (n - 1 - rightPos);
    if (leftPos > rightPos) swaps--;
    cout << swaps;
}
