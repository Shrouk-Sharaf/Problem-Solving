// Code 1: Difficulty Classifier
#include <iostream>
#include <string>
using namespace std;
int main() {
    string w;
    cin >> w;
    if (w == "GitHub")
        cout << "Easy";
    else if (w == "Fraction_Calculator")
        cout << "Medium";
    else
        cout << "Hard";
}
