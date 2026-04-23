// https://codeforces.com/contest/2014/problem/A
#include <iostream>
using namespace std;
int main() {
    int t, n, k;
    cin >> t;
    while (t--){
        int thenumberofpeoplethatwillgetgoldfromRobinHood = 0, whatrobinhas = 0 ;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            if (a[i] >= k) whatrobinhas += a[i];
            if (a[i] == 0 && whatrobinhas > 0){
                thenumberofpeoplethatwillgetgoldfromRobinHood++;
                whatrobinhas--;
            }
        }
        cout << thenumberofpeoplethatwillgetgoldfromRobinHood << endl;
    }
}
