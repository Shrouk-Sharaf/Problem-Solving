// https://vjudge.net/contest/657513#problem/B
#include <iostream>
#include <deque>
using namespace std;
int main(){
    int t, n;
    string s;
    deque<int> q;
    bool reversed = false;
    cin >> t;
    while(t--){
        cin >> s;
        if(s == "toFront"){
            cin >> n;
            if(!reversed) q.push_front(n);  // Normal mode
            else q.push_back(n);            // Reversed mode
        }
        else if(s == "push_back"){
            cin >> n;
            if(!reversed) q.push_back(n);   // Normal mode
            else q.push_front(n);           // Reversed mode
        }
        else if(s == "back"){
            if(!q.empty()) {
                if(!reversed) {               // Normal mode
                    cout << q.back() << '\n';
                    q.pop_back();
                }
                else {                        // Reversed mode
                    cout << q.front() << '\n';
                    q.pop_front();
                }
            }
            else cout << "No job for Ada?" << '\n';
        }
        else if(s == "front"){
            if(!q.empty()) {
                if(!reversed) {                // Normal mode
                    cout << q.front() << '\n';
                    q.pop_front();
                }
                else {                         // Reversed mode
                    cout << q.back() << '\n';
                    q.pop_back();
                }
            }
            else cout << "No job for Ada?" << '\n';
        }
        else if(s == "reverse"){
            reversed = !reversed;
        }
    }
}
