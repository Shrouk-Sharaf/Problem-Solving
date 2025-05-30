// https://codeforces.com/problemset/problem/677/A
//#include <iostream>
//using namespace std;
//
//
//int main(){
//    int n, h;
//    int result = 0;
//    cin >> n >> h;
//    int arr[n];
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//        if (arr[i] <= h) result++;
//        else result += 2;
//    }
//
//    cout << result;
//}


// https://codeforces.com/problemset/problem/116/A
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    int cap = 0;
//    cin >> n;
//    int arr[n];
//    int x, y;
//    for (int i = 0; i < n; ++i) {
//        cin >> x >> y;
//        cap = cap - x;
//        cap = cap + y;
//        arr[i] = cap;
//    }
//    int maxx = arr[0];
//    for (int i = 0; i < n ; ++i){
//        if (arr[i] > maxx) maxx = arr[i];
//    }
//    cout << maxx;
//}



// https://codeforces.com/problemset/problem/467/A
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cin >> n;
//    int res = 0;
//    int x, y;
//    for (int i = 0; i < n; ++i) {
//        cin >> x >> y;
//        if (y - x >= 2) res++;
//    }
//    cout << res;

//https://codeforces.com/problemset/problem/228/A
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int res = 4;
    if (a == b) res--;
    if (a == c || b == c) res--;
    if (a == d || b == d || c == d) res--;
    cout << 4 - res;
}