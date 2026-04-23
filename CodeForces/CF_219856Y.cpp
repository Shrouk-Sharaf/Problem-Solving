// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Y
// Minimized version
#include <bits/stdc++.h>
using namespace std;
int main() {
    string value;
    int cost[26];
    cin >> value;
    for (int i = 0; i < 26; i++)
        cin >> cost[i];
    int size = value.size();
    for (int i = 0; i < size;) {
        if (value[i] == '?') {
            int start = i;
            while (i < size && value[i] == '?') i++;
            int end = i;
            char left_char = (start > 0) ? value[start - 1] : 'a';
            char right_char = (end < size) ? value[end] : 'a';
            int min_cost = INT_MAX, best_char = 0;
            for (int z = 0; z < 26; z++) {
                int left_cost = (start > 0) ? abs(cost[left_char - 'a'] - cost[z]) : 0;
                int right_cost = (end < size) ? abs(cost[z] - cost[right_char - 'a']) : 0;
                int current_cost = left_cost + right_cost;
                if (current_cost < min_cost) {
                    min_cost = current_cost;
                    best_char = z;
                }
            }
            fill(value.begin() + start, value.begin() + end, 'a' + best_char);
        }
        else i++;
    }
    long long finalCost = 0;
    for (int i = 0; i < size - 1; i++) {
        finalCost += abs(cost[value[i] - 'a'] - cost[value[i + 1] - 'a']);
    }
    cout << finalCost << endl;
    cout << value << endl;
}
