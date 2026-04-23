// Change Case
#include <iostream>
using namespace std;
int main(){
    char x;
    cin>>x;
    if ('z'>= x && x >= 'a'){
        cout << char(x - 'a' + 'A') << endl;
    }
    else if ('Z'>= x && x >= 'A'){
        cout << char(x - 'A' + 'a') << endl;
    }
    return 0;
}
