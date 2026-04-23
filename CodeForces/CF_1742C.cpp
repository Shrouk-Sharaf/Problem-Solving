//https://codeforces.com/contest/1742/problem/C
#include <iostream>
using namespace std;
int main() {
    int T, counter;
    cin >> T;
    while (T--) {
        bool flag = true;
        char array[8][8];
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                cin >> array[i][j];
            }
        }
        for (int i = 0; i < 8; i++){
            for (int j = 0; j < 8; j++){
                if (array[i][j] == 'R')
                    counter++;
            }
            if(counter == 8){
                cout << "R" << endl;
                flag = false;
                break;
            }
            counter=0;
        }
        counter = 0
        if(flag)
            cout << "B" << endl;
    }
}
