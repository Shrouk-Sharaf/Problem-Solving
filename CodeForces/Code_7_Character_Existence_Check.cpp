// Code 7: Character Existence Check
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t > 0){
        char c;
        cin >> c;
        if( c == 's' || c == 'o' ||c == 'f'||c == 'r' ||c == 'c'||c == 'd' || c == 'e' )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        --t;
    }
}
