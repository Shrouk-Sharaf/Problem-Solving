// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/J
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
void average(int n, vector<double> nums) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    cout << fixed << setprecision(6) << sum / n << endl;
}
int main() {
    int n;
    cin >> n;
    vector<double> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    average(n, nums);
}
