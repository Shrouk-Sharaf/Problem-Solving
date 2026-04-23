// Player Switcher
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string player;
        int turns;
        cin >> player >> turns;
        if (player == "Folka") {
            if (turns % 2 != 0)
                cout << player << endl;
            else
                cout << "Cancelo" << endl;
        } else if (player == "Cancelo") {
            if (turns % 2 != 0)
                cout << player << endl;
            else
                cout << "Folka" << endl;
        }
    }
    return 0;
}
