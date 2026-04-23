// Exam Result Checker
#include <iostream>
using namespace std;
int main(){
    int t , total = 0, score;
    cin >> t;
    while (t > 0){
        cin >> score;
        total += score;
        --t;
    }
    if ( total >= 100)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
