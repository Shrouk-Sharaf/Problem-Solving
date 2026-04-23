// 200B drinks
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n, avg=0, a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        avg += a;
    }
    cout << fixed << setprecision(12) << (double)avg/n;
}
