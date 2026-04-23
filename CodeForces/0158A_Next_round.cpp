// 0158A Next round
#include <iostream>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    long long nums[n];
    for (int i = 0; i < n; ++i){
        cin >> nums[i];
    }
    int count = 0;
    for (int i = 0; i < n; ++i){
        if (nums[i] >= nums[k-1] && nums[i] > 0) {
            count++;
        }
    }
    cout << count;
}
