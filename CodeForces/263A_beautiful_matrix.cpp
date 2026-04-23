// 263A beautiful matrix
#include <iostream>
using namespace std;
int main(){
    int x,y, count=0;
    int num[5][5];
    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 5; ++j){
            cin >> num[i][j];
            if(num[i][j] == 1 ){
                x = i;
                y = j;
            }
        }
    }
    count += abs(x - 2) + abs(y - 2);
    cout << count;
}
