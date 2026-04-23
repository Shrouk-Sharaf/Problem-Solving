// 1950 B
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            for ( int x = 0 ; x < 2; ++x){
                if (i % 2 == 0){
                    for (int j = 0; j < n; ++j) {
                        if (j % 2 == 0)
                            cout << "##";
                        else
                            cout << "..";
                    }
                    cout << endl;
                }
                else{
                    for (int j = 0; j < n; ++j) {
                        if (j % 2 == 0)
                            cout << "..";
                        else
                            cout << "##";
                    }
                    cout << endl;
                }
            }
        }
    }
}
