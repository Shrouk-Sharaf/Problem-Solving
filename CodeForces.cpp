/*
// Multiples Checker
#include<iostream>
using namespace std;
int main(){
    int x, y;
    cin>>x>>y;
    if (x%y==0 || y%x==0) {
        cout << "Multiples" << endl;
    }
    else{
        cout<< "No Multiples"<< endl;
        }
    return 0;
}

// Max of Three Numbers
#include <iostream>
using namespace std;
int main(){
    int x, y, z;
    cin >> x>>y>>z;
    if (x>y && x>z){
        if (y<z){
            cout<<y <<" "<< x<<endl;
        }
        else {
            cout << z << " " << x << endl;
        }
    }
    else if (y>x && y>z){
        if(x<z){
            cout<<x <<" "<< y<<endl;
        }
        else{
            cout<<z <<" "<< y<<endl;
        }
    }
    else if (z>y && z>x){
        if (y<x){
            cout<<y <<" "<< z<<endl;
        }
        else{
            cout<<x <<" "<< z<<endl;
        }
    }
    else if ( x == y){
        if (y<z){
            cout<< y << " "<< z;
        }
        else{
            cout<< z << " "<< y;
        }
    }
    else if ( x == z){
        if (z<y){
            cout<< z << " "<< y;
        }
        else{
            cout<< y << " "<< z;
        }
    }
    else if (z==y){
        if (z<x){
            cout<< y << " "<< x;
        }
        else{
            cout<< x << " "<< y;
        }
    }
}

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

// Sibling String Checker
#include <iostream>
# include <string>
using namespace std;
int main(){
    string x,y,a,b;
    cin >> x>>y>>a>>b;
    if (y==b){
        cout<< "ARE Brothers" << endl;
    }
    else{
        cout<<"NOT"<<endl;
    }
}

// Factorial Calculator
#include<iostream>
using namespace std;
int main(){
    int num,res=1;
    cin >> num;
    while (num > 0){
        res *= num;
        num--;
    }
    cout << res << endl;
}

// Print Numbers (except multiples of 4)
#include<iostream>
using namespace std;
int main(){
    for(int x = 0; x < 20; x++){
        if (x%4 == 0){
            continue;
        }
        else{
            cout<< x<<endl;
        }
    }
}
// Password Validation
#include<iostream>
using namespace std;
int main(){
    int x = 0;
    while (x != 1999){
        cin>>x;
        if (x==1999){
            cout<<"Correct"<<endl;
            return 0;
        }
        else{
            cout << "Wrong"<<endl;
        }
    }
}

// Prime Number Checker
#include<iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    if (x < 2) {
        cout << "NO" << endl;
    }
    else {
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}

// Assignment 1 Workshop
#include<iostream>
using namespace std;
int main(){
    int x,y,b;
    cin >>x>>y;
    b=x,x=y,y=b;
    cout<<x<<" "<<y;
    return 0;
}

// Sum of Natural Numbers
#include<iostream>
using namespace std;
int main(){
    int x,i=1,sum=0;
    cin>>x;
    while (i<=x){
        sum +=i;
        i++;
    }
    cout <<sum<<endl;
    return 0;
}

// Arithmetic Operations with Variables
#include<iostream>
using namespace std;
int main(){
    int x=10,y=5,z=-3;
    cout<<x++ +y - --z<<endl;
    cout<<++x - ++y + z++<<endl;
    cout<<x + y++ +z<<endl;
    cout<<x<<" "<<y<<" "<<z;

}
// Prime Number Printer (2 to N)
#include<iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    for(int i=2; i <= x; ++i){
        int flag = 1;
        for(int y=2; y * y <= i; ++y){
            if(i % y == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            cout << i << " ";
    }
}

// Maximum of N Numbers
#include<iostream>
using namespace std;
int main() {
    int x,n,max;
    cin >> x;
    cin >> n;
    max=n;
    for(int i=1; i < x; ++i){
        cin>>n;
        if(n>max)
            max=n;
    }
    cout<<max;
}

// Divisors of a Number
#include<iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    for(int i=1;i<=x; ++i){
        if(x%i==0)
            cout <<i<<"\n";
    }
}

// Character Pattern Printer
#include<iostream>
using namespace std;
int main() {
    int x,n;
    char y;
    cin>>y;
    cin>>x;
    for(int i=1; i<=x ; ++i){
        cin>>n;
        for(int c=1; c<=n ; ++c) {
            cout << y;
        }
        cout<<endl;
    }
    return 0;
}

// Character Pattern Printer (Enhanced)
#include <iostream>
using namespace std;
int main() {
    char S;
    int N,X;
    cin >> S;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> X;
        for (int j = 0; j < X; ++j) {
            cout << S;
        }
        cout << endl;
    }
    return 0;
}
// Even, Odd, Positive, Negative Counter
#include<iostream>
using namespace std;
int main() {
    int n,x,even=0,odd=0,positive=0,negative=0;
    cin >>n;
    while (n>0){
        cin >>x;
        if(x>0)
            ++positive;
        else if (x<0)
            ++negative;
        if (x % 2 == 0)
            ++even;
        else
            ++odd;
        --n;
    }
    cout<<"Even:"<<even<<endl<<"odd:"<<odd<<endl<<"positive:"<<positive<<endl<<"negative:"<<negative;
    return 0;
}

// Maximum among N Numbers (Updated)
#include<iostream>
using namespace std;
int main() {
    int x,n,max;
    cin>>x;
    while(x>0){
        cin>>n;
        max=n;
        while(x>1) {
            cin >> n;
            if (max < n)
                max = n;
            --x;
        }
        cout << max <<endl;
        --x;
    }
}

// Prime Number Checker (Optimized)
#include<iostream>
using namespace std;
bool check_prime(long long n){
    for(int i=2; i*i<=n;++i){
        if (n%i==0)
            return false;
    }
    return true;
}
int main(){
    int t;
    long long n;
    cin>>t;
    while(t>0){
        cin>>n;
        if (check_prime(n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    --t;
    }
}

// Factorial Calculator (Recursive)
#include<iostream>
using namespace std;
long long Factorial(int N){
    if (N==0 || N==1)
        return 1;
    return N * Factorial(N-1);
}
int main(){
    long long n;
    cin>>n;
    cout<<Factorial(n);
}

// Sequence Counter
#include<iostream>
using namespace std;
int seq(long long n){
    if (n==1)
        return 1;
    else if (n%2==0)
        return 1+ seq(n/2);
    else
        return 1+seq(3*n+1);
}
int main(){
    long long n;
    cin>>n;
    cout<<seq(n);
}
// Triangle Pattern Printer
#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cout << string(N - i, ' ') << string(2 * i - 1, '*') << endl;
    }
    for (int i = N - 1; i >= 1; --i) {
        cout << string(N - i, ' ') << string(2 * i - 1, '*') << endl;
    }
}

// Triangle Pattern Printer (Optimized)
#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cout << string(N - i, ' ') << string(2 * i - 1, '*') << endl;
    }
    for (int i = N - 1; i >= 1; --i) {
        cout << string(N - i, ' ') << string(2 * i - 1, '*') << endl;
    }
}

// Repeating Character Printer
#include <iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    for(int i=2; i*i <= num;++i){
        if(num % i == 0)
            cout<<"it is not";
        else
            cout<<"it is";
    }
}

// Bear and Big Brother
#include<iostream>
using namespace std;
int main(){
    int a, b, res = 0;
    cin >> a >> b;
    while(a <= b){
        a *= 3;
        b *= 2;
        res += 1;
    }
    cout << res;
}

// Sum
#include<iostream>
using namespace std;
int main(){
    int a, b, c , T;
    cin >> T;
    while(T>0){
        cin >> a >> b >> c;
        if(a+b == c || a+ c == b|| b + c == a)
            cout << "YES" << endl;
        else
            cout << "NO"<< endl;
        T -= 1;
    }
}

// Borze
#include<iostream>
#include <string>
using namespace std;
int main(){
    string n , num;
    cin >> n;
    for (size_t i = 0; i < n.length(); ++i) {
        if (n[i] == '.') {
            num += '0';
        } else if (i + 1 < n.length() && n[i] == '-' && n[i + 1] == '.') {
            num += '1';
            ++i;
        } else if (i + 1 < n.length() && n[i] == '-' && n[i + 1] == '-') {
            num += '2';
            ++i;
        }
    }
    cout << num;
}
// Print Series and Calculate Sum
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    while (!(a <= 0 || b <= 0)) {
        string s;
        int count = 0;
        if (a > b) {
            for (int i = b; i <= a; ++i) {
                s = s + to_string(i) + " ";
                count += i;
            }
        } else {
            for (int i = a; i <= b; ++i) {
                s = s + to_string(i) + " ";
                count += i;
            }
        }
        cout << s << "sum =" << count << endl;
        cin >> a >> b;
    }
    return 0;
}

// Diamond Pattern Printer
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cout << string(N - i, ' ') << string(2 * i - 1, '*') << endl;
    }
    for (int i = N ; i >= 1; --i) {
        cout << string(N - i, ' ') << string(2 * i - 1, '*') << endl;
    }
    return 0;
}

// Print Series with PUM
#include <iostream>
using namespace std;
int main() {
    int x = 1;
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cout << x << " " << x + 1 << " " << x + 2 << " PUM" << endl;
        x += 4;
    }
    return 0;
}

// Print Middle Number
#include <iostream>
using namespace std;
int main(){
    int a , b ,c;
    cin >> a >> b >>c;
    if (a == b)
        cout << c;
    else if (b==c)
        cout << a;
    else
        cout <<b;
    return 0;
}

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

// Print Pattern of Stars and Spaces
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x = ceil(n/2);
    int y = floor (n/2);
    // Print the shape
    for (int i = 0; i < x ; ++i) {
        // Print leading spaces
        for (int j = i; j < y ; ++j) {
            cout << " ";
        }
        // Print '*'
        cout << "*";
        // Print spaces between '*'
        for (int j = 0; j < 2 * i - 1; ++j) {
            cout << " ";
        }

        cout << endl;
    }
    return 0;
}
// Improved Pattern of Stars and Spaces
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x = ceil(n/2);
    int y = floor(n/2);
    for (int i = 0; i < x; ++i) {
        for (int j = y; j > 0; --j) {
            cout << " ";
        }
        --y;
        cout << "*";
        for (int j = 0; j < 2 * i - 1; ++j) {
            cout << " ";
        }
        if (i != 0)
            cout << "*";
        cout << endl;
    }
    for (int k = 0; k < n; ++k)
        cout <<"*";
    return 0;
}
// Calculate Total Scores from Alternate Elements
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t, n, num;
    cin >> t;
    while (t >0) {
        int score = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> num;
            arr[i] = num;
        }
        for (int j = 0; j < n; j += 2) {
            score += ceil((arr[j] + arr[j + 1]) / 2.0);
        }
        --t;
        cout << score << endl;
    }
    cout << ceil(8.01);
    return 0;
}

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

// Combination Calculator
#include <iostream>
using namespace std;
long long countPossibleIntegers(int ones, int zeroes) {
    long long result = 1;
    for (int i = 1; i <= zeroes; ++i) {
        result *= (ones + i);
        result /= i;
    }
    return result;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        cout << countPossibleIntegers(a, b) << endl;
    }
}

// Combination Calculator (Optimized)
#include <iostream>
using namespace std;
long long BC(int n, int r) {
    if (r < 0 || r > n)
        return 0;
    if (r > n / 2)
        r = n - r;
    long long res = 1;
    for (int i = 0; i < r; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        cout << BC(a, b) << endl;
    }
    return 0;
}

// Binary to Decimal Converter
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        string binary;
        cin >> binary;
        int decimal = 0;
        int size = binary.size();
        for (int i = 0; i < size; ++i) {
            if (binary[i] == '1') {
                decimal += pow(2, size - 1 - i);
            }
        }
        cout << decimal << endl;
    }
    return 0;
}

// Word Reverser
#include<iostream>
#include<string>
using namespace std;
int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string str;
        getline(cin, str);
        int start = 0;
        for (int end = 0; end < str.size(); ++end) {
            if (str[end] == ' ') {
                for (int i = end - 1; i >= start; --i) {
                    cout << str[i];
                }
                cout << " ";
                start = end + 1;
            }
        }
        for (int i = str.size() - 1; i >= start; --i) {
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}

// Array Rotator
#include<iostream>
using namespace std;
void rotate(int arr[], int n, int k) {
    k = k % n;
    for (int i = 0; i < n; ++i) {
        cout << arr[(i + k) % n] << " ";
    }
    cout << endl;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        rotate(arr, n, k);
    }
    return 0;
}

// String Reverser
#include<iostream>
#include<string>
using namespace std;
int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string str;
        getline(cin, str);
        for (int i = str.size() - 1; i >= 0; --i) {
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}

// Simple Array Sum
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        sum += num;
    }
    cout << sum << endl;
    return 0;
}

// Diagonal Difference Calculator
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int num;
            cin >> num;
            if (i == j) {
                diag1 += num;
            }
            if (i + j == n - 1) {
                diag2 += num;
            }
        }
    }
    cout << abs(diag1 - diag2) << endl;
    return 0;
}

// Plus Minus Ratio Calculator
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    int positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (num > 0) {
            ++positive;
        } else if (num < 0) {
            ++negative;
        } else {
            ++zero;
        }
    }
    cout << fixed << setprecision(6);
    cout << (double) positive / n << endl;
    cout << (double) negative / n << endl;
    cout << (double) zero / n << endl;
    return 0;
}
// summation
#include <iostream>
#include <string>
using namespace std;
int main() {
    long long n;
    long long sum = 0;
    string p;
    cin >> n;
    cin.ignore();
    getline(cin, p);
    for (long long i = 0; i < n ; ++i) {
        sum += p[i] - '0';
    }
    cout << sum;
    return 0;
}
// Searching
#include<iostream>
using namespace std;
int main() {
    long long n, find , place;
    cin >> n;
    bool flag = true;
    long long p[n];
    for (int i =0 ; i < n ;++i){
        cin >> p[i];
    }
    cin >> find;
    for (int j = 0; j < n-1 ; ++j){
        if (find == p[j]){
            flag = true;
            place = j;
            break;
        }
        else
            flag = false;
    }
    if (flag){
        cout << place;
    }
    else
        cout << -1;
}
// smallest pair
#include <iostream>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long p[n];
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        long long min_sum = 10000000;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                long long sum = p[i] + p[j] + j - i;
                if (sum < min_sum)
                    min_sum = sum;
            }
        }
        cout << min_sum << endl;
    }
}
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
// Code 2: String Sorting
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        sort(n.begin() + 1, n.end());
        string w = n;
        sort(w.begin(), w.end());
        if (w == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
// Code 3: Character Classification
#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    getline(cin, name);
    if (name[0] == 'i' || name[0] == 'c' || name[0] == 'p')
        cout << "Hate";
    else if (name[0] == 'f' || name[0] == 'm' || name[0] == 'r'|| name[0] == 'h'|| name[0] == 'e'|| name[0] == 'a')
        cout << "love";
    else
        cout <<"Normal";
}
// Code 4: Time Comparison
#include <iostream>
#include <string>
using namespace std;
int main() {
    string time;
    cin >> time;
    int h = stoi(time.substr(0, 2));
    int m = stoi(time.substr(3, 2));
    if ((h > 18 || (h == 18 && m >= 5)) || (h < 4 || (h == 4 && m < 35))) {
        cout << "tm t3b2a alkrsh bnga7" << endl;
    } else {
        cout << "mta yazn almghrb" << endl;
    }
}
// Code 5: Character Grid Analysis
#include <iostream>
using namespace std;
int main() {
    int n ,As = 0 ,Ns =0;
    cin >> n;
    char grid[n][n];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> grid[i][j];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 'A')
                As += 1;
            else if (grid[i][j] == 'N')
                Ns += 1;
        }
    }
    if (Ns >= 1 && As >= 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
// Code 6: Recursive Function
#include <iostream>
#include <cmath>
using namespace std;
int rabe3(long long weight, long long max) {
    if (weight <= max)
        return 1;
    else {
        long long x = ceil(weight / 2.0), y = floor(weight / 2.0);
        if(x == y){
            long long split1 = rabe3(x, max);
            return 2 * split1;
        }
        else{
            long long split1 = rabe3(x, max);
            long long split2 = rabe3(y, max);
            return split1 + split2;
        }
    }
}
int main() {
    long long T, n, m;
    cin >> T;
    for (long long t = 0; t < T; ++t) {
        cin >> n >> m;
        cout << rabe3(n, m) << endl;
    }
}
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
// Code 8: Triplet Sum Check
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        if (x == y + z || y == x + z || z == x + y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
// Code 9: Unique Element Index
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int length;
        cin >> length;
        int p[length];
        for (int i = 0; i < length; ++i) {
            cin >> p[i];
        }
        int index;
        if (p[0] != p[1] && p[0] != p[2]) {
            index = 1;
        } else {
            for (int j = 1; j < length - 1; ++j) {
                if (p[j] != p[j - 1] && p[j] != p[j + 1]) {
                    index = j + 1;
                    break;
                }
            }
        }
        cout << index << endl;
    }
}
// Code 10: Factorial Calculation
#include <iostream>
using namespace std;
unsigned long long factorial(unsigned long long n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    unsigned long long a, b;
    cin >> a >> b;
    if (a > b)
        cout << factorial(b);
    else
        cout << factorial(a);
}

// Code 11: Maximum Length Increasing Subarray
#include <iostream>
using namespace std;
int main(){
    long long n, counter = 1, maxL = 1;
    cin >> n;
    long long p[n];
    for (long long i = 0; i < n; ++i) {
        cin >> p[i];
    }
    for(int j = 1; j < n ; ++j){
        if (p[j] >= p[j - 1])
            counter += 1;
        else
            counter = 1;
        maxL = max(maxL, counter);
    }
    cout << maxL << endl;
}
#include <iostream>
using namespace std;
bool is_prime(long long n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long num;
        cin >> num;
        if (num <= 1) {
            cout << "NO" << endl;
            continue;
        }
        bool prime = is_prime(num);
        if (prime)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n / 2; ++i) {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
// 1950 A
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b && b < c)
            cout << "STAIR" << endl;
        else if (a < b && b > c)
            cout << "PEAK" << endl;
        else
            cout << "NONE" << endl;
    }
}
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
// 1950 C
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int hour = stoi(s.substr(0, 2));
        int minute = stoi(s.substr(3, 2));
        string period = "AM";
        if (hour >= 12) {
            period = "PM";
            if (hour > 12)
                hour -= 12;
        }
        if (hour == 0)
            hour = 12;
        cout << (hour < 10 ? "0" : "") << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << period << endl;
    }
}

//1950D product of Binary decimals
#include <iostream>
using namespace std;
void product_of_Binary_decimals() {
    long long n;
    cin>>n;
    int bin_p[]={10,11,101,111,1001,1011,1101,1111,10001,10011,10101,10111
             ,11001,11011,11101,11111};
    for (int i = 15 ; i >= 0; i--) {
        while (n % bin_p[i] == 0) {
            n /= bin_p[i];
        }
    }
    cout << ((n == 1) ? "YES" : "NO") << endl;
}
int main() {
    long long T;
    cin>>T;
    while (T--) {
        product_of_Binary_decimals();
    }
}
#include <iostream>
using namespace std;
int main(){
    int t, score1, score2, total1=0, total2=0;
    string name1, name2;
    cin >> t;
    for(int i =0 ; i < t; ++i){
        if(i % 2 == 0){
            cin >> name1 >> score1;
            total1 += score1;
        }
        else{
            cin >> name2 >> score2;
            total2 += score2;
        }
    }
    if(score1 > score2){
        cout << name1;
    }
    else{
        cout << name2;
    }
}
#include<iostream>
using namespace std;
int main(){
    long int i,n;
    while(cin>>n){
        string s[10000];
        int a[10000];
        map<string,long int>mp;
        for(i=0;i<n;i++){
            cin>>s[i]>>a[i];
            mp[s[i]]+=a[i];
        }
        long int mx=0;
        for(i=0;i<n;i++){
            mx=max(mp[s[i]],mx);
        }
        map<string,long int>mp2;
        string ans;
        for(i=0;i<n;i++){
            mp2[s[i]]+=a[i];
            if(mp2[s[i]]>=mx && mp[s[i]]==mx)
            {
                ans=s[i];
                break;
            }
        }
        cout<<ans<<endl;
    }
}
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int cost1 = n * a;
        int pair = n / 2;
        int remain = n % 2;
        int cost2 = pair * b + remain * a;
        cout <<((cost1>cost2)? cost2 : cost1) << endl;
    }
}
// Watermelon 2
#include <iostream>
using namespace std;
int main() {
    long long t, n, x;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n % 2 != 0)
            cout <<"NO" << endl;
        else{
            x = n / 2;
            if (x % 2 == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}
// divisible pair
#include <iostream>
using namespace std;
int main() {
    long long t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << ((a != 0 && b != 0 && a % b != 0 && b % a != 0 )? "YES" : "NO") << endl;
    }
}
#include <iostream>
using namespace std;
long long summation (){
    long long a, b;
    cin >> a >> b;
    return a + b ;
}
int main() {
    cout << summation();
}
#include <iostream>
using namespace std;
long five_in_one(){
    int x;
    cin >>  x;

}
// 0158A Next round
#include <iostream>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    long long nums[n];
    for (int i = 0; i < n; ++i){
        cin >> nums[i];
    }
    int count = 0;
    for (int i = 0; i < n; ++i){
        if (nums[i] >= nums[k-1] && nums[i] > 0) {
            count++;
        }
    }
    cout << count;
}
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
// 200B drinks
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n, avg=0, a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        avg += a;
    }
    cout << fixed << setprecision(12) << (double)avg/n;
}
// magnet
#include <iostream>
using namespace std;
int main(){
    int n, count = 0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int k = 0; k < n; ++k){
        if(a[k] != a[k+1])
            count++;
    }
    cout << count;
}
#include <iostream>
#include <string>
using namespace std;
int main() {
    int x = 0, y = 0, z = 0;
    string s, sorted, result;
    getline(cin, s);
    for (char c : s) {
        if (c == '1')
            x++;
        else if (c == '2')
            y++;
        else if (c == '3')
            z++;
    }
    if(x != 0){
        for(int i = 0; i < x; i++)
            sorted += "1+";
    }
    if(y != 0){
        for(int i = 0; i < y; i++)
            sorted += "2+";
    }
    if(z != 0){
        for(int i = 0; i < z; i++)
            sorted += "3+";
    }
    for(int i = 0; i < sorted.length()-1; ++i)
        result += sorted[i];
    cout << result << endl;
}
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int y = x - 1;
        int max_sum = 0; // Initialize max_sum to 0
        while (gcd(x, y) + y <= max_sum ) {
            y--;
        }
        max_sum = gcd(x, y) + y; // Update max_sum
        cout << y << endl;
    }

    return 0;
}

// https://codeforces.com/contest/1742/problem/B
#include <iostream>
using namespace std;
void sort_numbers(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        sort_numbers(arr, size);
        bool ok = true;
        for (int k = 0; k < size - 1; ++k) {
            if (arr[k] == arr[k + 1]) {
                ok = false;
                break;
            }
        }
        if (!ok)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}

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
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, totalCellsRequired = 0, num_of_screens = 0;
        cin >> x >> y;
        totalCellsRequired = (y * 4) + x;
        while (y > 0) {
            y -= 2;
            ++num_of_screens;
        }
        while (totalCellsRequired > (num_of_screens * 15)) {
            totalCellsRequired -= 15;
            ++num_of_screens;
        }
        cout << num_of_screens << endl;
    }
}
#include <iostream>
using namespace std;
int main() {
    long long T;
    cin >> T;
    while (T--) {
        long long x, y;
        cin >> x >> y;
        long long num_of_screen = y / 2;
        x -= num_of_screen * 7;
        if (y % 2) {
            ++num_of_screen;
            x -= 11;
        }
        if (x > 0) {
            num_of_screen += (x + 14) / 15;
        }
        cout << num_of_screen << endl;
    }
}

#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
using namespace std;
string decode(string b) {
    set<char> unique_letters(b.begin(), b.end());
    vector<char> letters(unique_letters.begin(), unique_letters.end());
    map<char, char> maps;
    for (int i = 0; i < letters.size(); i++) {
        maps[letters[i]] = letters[letters.size() - i - 1];
    }
    string s;
    for (char c : b) {
        s += maps[c];
    }
    return s;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;
        string s = decode(b);
        cout << s << endl;
    }
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    int arr[n], lost[q];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < q; ++i) {
        cin >> lost[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < q; ++i) {
        int l = 0;
        int r = n - 1;
        bool found = false;
        while (l <= r) {
            int m = (l + r) / 2;
            if (arr[m] == lost[i]) {
                found = true;
                break;
            } else if (arr[m] < lost[i])
                l = m + 1;
            else
                r = m - 1;
        }
        if (found)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
#include <iostream>
using namespace std;
int main(){
    bool ok = true;
    long long t;
    cin >> t;
    long long p[t];
    for(int i=0; i< t; i++){
        cin >> p[i];
    }
    for (int i = 0; i < t; i++){
        if(p[i]!= p[t - i - 1]){
            ok = false;
            break;
        }
    }
    if(ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
#include <iostream>
using namespace std;
int main() {
    long long t;
    cin >> t;
    long long p[t];
    for (int i = 0; i < t; i++) {
        cin >> p[i];
    }
    for (int i = 0; i < t; i++) {
        if (p[i] < 0)
            p[i] = 2;
        else if (p[i] > 0)
            p[i] = 1;
    }
    for (int i = 0; i < t; i++) {
        cout << p[i] << " ";
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
// brute force solution
#include <iostream>
#define ll long long
using namespace std;
int main() {
    ll Q, N, a, b;
    cin >> N >> Q;
    ll p[N];
    for (ll i = 0; i < N; i++) {
        cin >> p[i];
    }
    while(Q--) {
        cin >> a >> b;
        ll summ = 0;
        for (ll j = a - 1; j < b ; j++) {
            summ += p[j];
        }
        cout << summ << endl;
    }
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
// prefix sum solution to avoid time limit issues
#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main() {
    ll Q, N, a, b;
    cin >> N >> Q;
    ll prefix[N+1] = {};
    for (ll i = 1; i <= N; i++) {
        cin >> prefix[i];
        prefix[i] += prefix[i-1];
    }
    while(Q--) {
        cin >> a >> b;
        cout << prefix[b]-prefix[a-1] << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
#include <iostream>
using namespace std;
int main() {
    long long t;
    cin >> t;
    long long arr[t];
    for(long long i = 0; i < t; ++i){
        cin >> arr[i];
    }
    for(long long j = t-1 ; j >= 0; --j){
        cout << arr[j] << " ";
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
#include <iostream>
using namespace std;
int main() {
    long long t;
    cin >> t;
    long long arr[t];
    for (long long i = 0; i < t; ++i) {
        cin >> arr[i];
        if (arr[i] <= 10)
            cout << "A[" << i << "] = " << arr[i] << endl;
    }
}

#include <iostream>
using namespace std;
int main() {
    bool ok = true;
    long long x, y, A, B;
    cin >> x >> y;
    char arr[x][y];
    for (long long i = 0; i < x; ++i) {
        for (long long j = 0; j < y; ++j) {
            cin >> arr[i][j];
        }
    }
    cin >> A >> B;
    --A;
    --B;
    if ((arr[A-1][B-1] != 'x' || arr[A-1][B] != 'x' || arr[A-1][B+1] != 'x' ||
        arr[A][B-1] != 'x' || arr[A][B+1] != 'x' ||
        arr[A+1][B-1]!= 'x' || arr[A+1][B]!= 'x' || arr[A+1][B+1]!= 'x') && (A-1) >= 0 && (A+1) <= x && (B-1) >= 0 && (B+1) <= x)
        ok = false;
    if (ok)
        cout << "yes";
    else
        cout << "no";
}

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N, M, X, Y;
    cin >> N >> M;
    vector<vector<char>> arr(N, vector<char>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> arr[i][j];
        }
    }
    cin >> X >> Y;
    --X; // Convert to 0-based index
    --Y; // Convert to 0-based index
    bool ok = true;
    // Directions array to check all 8 neighbors
    int directions[8][2] = {{-1, -1}, {-1, 0}, {-1, 1},
                            {0, -1}, {0, 1},
                            {1, -1}, {1, 0}, {1, 1}};
    for (int i = 0; i < 8; ++i) {
        int newX = X + directions[i][0];
        int newY = Y + directions[i][1];
        // Check if the new position is within the boundaries of the array
        if (newX >= 0 && newX < N && newY >= 0 && newY < M) {
            if (arr[newX][newY] != 'x') {
                ok = false;
                break;
            }
        }
    }
    if (ok)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, min;
    cin >> n;
    int arr[n], newarr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        newarr[i] = arr[i];
    }
    sort(newarr , newarr+ n);
    min = newarr[0];
    cout << min << " ";
    for (int i = 0; i < n; i++){
        if (min == arr[i]){
            cout << i+1;
            break;
        }
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, freq = 0;
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for (int i=0; i < n; i++){
        if(arr[0] == arr[i])
            freq++;
    }
    if (freq % 2 != 0)
        cout << "Lucky";
    else
        cout << "Unlucky";
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    bool ok = true;
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for(int i=0; i < n; i++){
        cin >> arr1[i];
    }
    for(int i=0; i < n; i++){
        cin >> arr2[i];
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);
    for(int i=0; i < n; i++){
        if(arr1[i] != arr2[i]) {
            ok = false;
            break;
        }
    }
    if(ok)
        cout << "yes";
    else
        cout << "no";
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
// verrrrrrrrrrrrrrrrrrrrrry important
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> count(m + 1, 0); // m + 1 is the size of the array and 0 is the initial value
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;  // this counts the frequency of each element
    }
    for (int i = 1; i <= m; i++) {
        cout << count[i] << endl;
    }
}

// https://codeforces.com/problemset/problem/705/A
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0)
            cout << "I hate";
        else
            cout << "I love";
        if (i == n)
            cout << " it";
        else
            cout << " that ";
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    copy_n(istream_iterator<int>(cin), n, v.begin());
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (v[j] < v[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap(v[i], v[min_idx]);
        }
    }
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
}
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    copy_n(istream_iterator<int>(cin), n, v.begin());
    sort(v.begin(), v.end());
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
#include <iostream>
using namespace std;
int main(){
    int n, msum = 0, fsum = 0;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            if (i == j)
                msum += arr[i][j];
            if (i + j == n - 1)
                fsum += arr[i][j];
        }
    }
    cout << abs(msum - fsum);
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    int largest = 0;
    int smallest = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        if (v[i] > v[largest])
            largest = i;
        if (v[i] < v[smallest])
            smallest = i;
    }
    swap(v[largest], v[smallest]);
    for(int i=0; i<n; i++)
        cout << v[i] << " ";
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++) {
            int maxvalue = v[i];
            for (int j = i; j < n; j++) {
                maxvalue = max(maxvalue, v[j]);
                cout << maxvalue << " ";
            }
        }
        cout << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
#include <iostream>
using namespace std;
int main(){
    int n, m;
    bool ok = false;
    bool tamam = false;
    cin >> n >> m;
    int l = n;
    int o = m;
    string K;
    cin >> K;
    if (K.length() != n+m+1){
        cout << "No";
        return 0;
    }
    if (K[n] != '-'){
        cout << "No";
        return 0;
    }
    for(int i = 0; i < n; i++) {
        if (isdigit(K[i]))
          l--;
        if (l == 0)
            ok = true;
    }
    for(int i = n+1; i < m+n+1; i++) {
        if (isdigit(K[i]))
          o--;
        if (o == 0)
            tamam = true;
    }
    if(ok && tamam)
        cout << "Yes";
    else
        cout << "No";
}

// https://codeforces.com/contest/1992/problem/A
#include <iostream>
using namespace std;
int main(){
    int a, b , c, T;
    cin >> T;
    while(T--){
        cin >> a >> b >> c;
        int times = 5;
        while(times--){
            if (a <= b && a <= c)
                ++a;
            else if (b <= a && b <= c)
                ++b;
            else if (c <= a && c <= b)
                ++c;
        }
        cout << a * b * c << endl;
    }
}

//https://codeforces.com/contest/1992/problem/B
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, result = 0;
        cin >> n >> k;
        int arr[k];
        for (int i = 0; i < k; i++)
            cin >> arr[i];
        sort(arr, arr + k);
        for (int i = 0; i < k - 1; i++) {
            if (arr[i] == 1)
                result++;
            else
                result += (arr[i] * 2) - 1;
        }
        cout << result << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
#include <iostream>
using namespace std;
int fibonacci(long long n){
    if(n == 1)
        return 0;
    else if(n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    cout << fibonacci(n);
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
#include <iostream>
using namespace std;
long long fibonacci(long long N) {
    if (N == 1)
        return 0;
    if (N == 2)
        return 1;
    long long a = 0, b = 1;
    for (long long  i = 3; i <= N; ++i) {
        long long next = a + b;
        a = b;
        b = next;
    }
    return b;
}
int main() {
    long long N;
    cin >> N;
    cout << fibonacci(N) << endl;
}

 // https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
#include <iostream>
using namespace std;
int main(){
    int n, times = 0;
    bool ok = true;
    cin >> n;
    long long array[n];
    for(int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    while(ok){
        for(int i = 0; i < n; ++i){
            if (array[i] % 2 != 0)
                ok = false;
        }
        if (ok){
            for(int i = 0; i < n; ++i){
                array[i] /= 2;
            }
            ++times;
        }
    }
    cout << times;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
#include <iostream>
using namespace std;
int main (){
    bool ok = false;
    int n, m, X;
    cin >> n >> m;
    long long mat[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> mat[i][j];
        }
    }
    cin >> X;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(mat[i][j] == X){
                ok = true;
                break;
            }
        }
    }
    if(ok)
        cout << "will not take number";
    else
        cout << "will take number";
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
#include <iostream>
#define ll long long
using namespace std;
int main(){
    ll n, m;
    cin >> n >> m;
    ll mat[n][m];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }
    for(ll i = 0; i<n; i++){
        for(ll j = m - 1; j >= 0; j--){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U
#include <iostream>
using namespace std;
int main() {
    int n, m, last = 0;
    cin >> n >> m;
    int array[n], subarray[m];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    for (int i = 0; i < m; i++)
        cin >> subarray[i];
    for (int i = 0; i < m; i++) {
        bool found = false;
        for (int j = last; j < n; j++) {
            if (subarray[i] == array[j]) {
                last = j + 1;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}

// https://codeforces.com/contest/1996/problem/A
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n%4 == 0)
            cout << n/4 << endl;
        else
            cout << n/4 + 1 << endl;
    }
}*/

/* مسابقة يوم الجمعة
#include <iostream>
#define ll long long
using namespace std;
int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        ll array[n][m];
        for(ll i = 0; i < n; i++){
            for (ll j = 0; j < m; j++){
                cin >> array[i][j];
            }
        }
        ll newsize = n/m;
        for(ll i = 0; i < newsize; ++i){
            for(ll j=0; j < newsize; ++j){
                ll row = i * m;
                ll col = j * m;
                cout << array[row][col];
            }
            cout << endl;
        }
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q
#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n, subarrays = 0, l = 0;
        cin >> n;
        int array[n];
        for(int i = 0; i < n; ++i){
            cin >> array[i];
        }
        for (int i = 0; i < n; ++i){
            if(array[i] >= array[i-1])
                ++l;
            else
                l = 1;
            subarrays += l;
        }
        cout << subarrays << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double x, p, Op = 0;
    cin >> x >> p;
    Op = p / (1 - (x/100));
    cout << fixed << setprecision(2) << Op;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B
#include <iostream>
using namespace std;
int main (){
    long long a, b, k;
    cin >> a >> b >> k;
    if (a % k == 0 && b % k == 0)
        cout << "Both";
    else if (a % k == 0 || b % k == 0){
        if (a % k == 0)
            cout << "Memo";
        else if (b % k == 0)
            cout << "Momo";
    }
    else
        cout << "No One";
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/A
#include <iostream>
using namespace std;
int main(){
    bool palindrome = true;
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] == '?' && s[n - i - 1] == '?') s[i] = s[n - i - 1] = 'a';
        else if (s[i] == '?') s[i] = s[n - i - 1];
        else if (s[n - i - 1] == '?') s[n - i - 1] = s[i];
        else if (s[i] != s[n - i - 1]) {
            palindrome = false;
            break;
        }
    }
    if (n % 2 == 1 && s[n / 2] == '?') s[n / 2] = 'a';
    if (palindrome) cout << s;
    else cout << -1;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A
#include <iostream>
using namespace std;
int main() {
    string S, T;
    getline(cin, S);
    getline(cin, T);
    cout << S.length() << " " << T.length() << endl << S << " " << T ;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(char c : s){
        if (c == '\\')
            break;
        else
            cout << c;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
#include <iostream>
using namespace std;
int main() {
    string X, Y;
    getline(cin, X);
    getline(cin, Y);
    cout << (X < Y ? X : Y);
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
#include <iostream>
using namespace std;
int main() {
    string A, B;
    getline(cin, A);
    getline(cin, B);
    cout << A.length() << " " << B.length() << endl << A + B << endl;
    cout << B[0] << A.substr(1) << " " << A[0] << B.substr(1) << endl; // we can use sap function swap(s[0],s1[0]);
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
#include <iostream>
using namespace std;
int main (){
    int sum = 0;
    string s;
    getline(cin, s);
    for(int i=0; i < s.length(); ++i){
        sum += s[i]- '0';
    }
    cout << sum;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore(); // لو شيلنا السطر ده مش هيطلع الاوتبوت لاخر تيست كيس
    while(t--){
        string s;
        getline(cin, s);
        long long n = s.length();
        if (n > 10)
            cout << s[0] << n - 2 << s[n-1] << endl;
        else
            cout << s << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
#include <iostream>
using namespace std;
int main (){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(isupper(s[i]))
            cout << char(tolower(s[i]));
        else if(islower(s[i]))
            cout << char(toupper(s[i]));
        else if (s[i] == ',')
            cout << " ";
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
#include <iostream>
#include <map>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    map<char, int> frequency;
    for(char c: s){
        frequency[c]++;
    }
    for(auto i: frequency){
        cout << i.first << " : " << i.second << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        string s, t;
        cin >> s >> t;
        for(int i = 0; i < s.length() || i < t.length(); i++){
            if(i < s.length()) cout << s[i];
            if(i < t.length()) cout << t[i];
        }
        cout << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        bool ok = false;
        string s;
        cin >> s;
        for (int i =0; i < s.length() - 2; ++i){
            if((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') || (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')){
                ok = true;
                break;
            }
        }
        cout << ((ok)? "Good" : "Bad") << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.length()/2 ; ++i){
        if(s[i]!= s[s.length() - i - 1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P
#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int word = 0;
    bool inWord = false;
    for (int i = 0; i < s.length(); ++i) {
        if (isalpha(s[i]))
            inWord = true;
        else if (inWord && (s[i] == ' ' || s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?')) {
            word++;
            inWord = false;
        }
    }
    if (inWord)
        word++;
    cout << word << endl;
}

// https://codeforces.com/problemset/problem/1985/B
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int Sum = 0, X = 0;
        for (int x = 2; x <= n; ++x) {
            int k = n / x;
            int sum = x * k * (k + 1) / 2;
            if (sum > Sum) {
                Sum = sum;
                X = x;
            }
        }
        cout << X << endl;
    }
}

// Extraaaaaaaaaaaaaaaaaaaa impotaaaaaaaaannnnnnttttt
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
#include <iostream>
#include <vector>
using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<int> count(26, 0);
    char c;
    for (long long i = 0; i < n; ++i) {
        cin >> c;
        ++count[c - 'a'];
    }
    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < count[i]; ++j)
            cout << (char)(i + 'a');
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s, word;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            reverse(word.begin(), word.end());
            cout << word << " ";
            word = "";
        }
        else
            word += s[i];
    }
    reverse(word.begin(), word.end());
    cout << word;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/L
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--) {
        string query;
        cin >> query;
        if (query == "pop_back")
            s.pop_back();
        else if (query == "front")
            cout << s.front() << endl;
        else if (query == "back")
            cout << s.back() << endl;
        else if (query == "sort") {
            int left, right;
            cin >> left >> right;
            sort(s.begin() + min(left, right) - 1, s.begin() + max(left, right));
        }
        else if (query == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(s.begin() + min(l, r) - 1, s.begin() + max(l, r));
        }
        else if (query == "substr") {
            int left, right;
            cin >> left >> right;
            for (int i = min(left, right) - 1; i < max(left, right); ++i)
                cout << s[i];
            cout << endl;
        }
        else if (query == "push_back") {
            char c;
            cin >> c;
            s.push_back(c);
        }
        else if (query == "print") {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << endl;
        }
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/R
#include <iostream>
using namespace std;
int main() {
    int n, score = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i) {
        switch (s[i]) {
            case 'V':
                score += 5;
                break;
            case 'W':
                score += 2;
                break;
            case 'X':
                if (i != n - 1) s[i + 1] = '0';
                break;
            case 'Y':
                if (i != n - 1) {
                    s.push_back(s[i + 1]);
                    s[i + 1] = '0';
                    ++n;
                }
                break;
            case 'Z':
                if (i != n - 1) {
                    if (s[i + 1] == 'V') {
                        score /= 5;
                        s[i + 1] = '0';
                    } else if (s[i + 1] == 'W') {
                        score /= 2;
                        s[i + 1] = '0';
                    }
                }
                break;
        }
    }
    cout << score;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    string s, word = "egypt";
    cin >> s;
    map<char, int> counter;
    for (char c : word) {
        counter[c] = 0;
    }
    for (char c : s) {
        if (counter.count(tolower(c))) counter[tolower(c)]++;
    }
    int mini = counter[word[0]];
    for (char c : word) {
        mini = min(mini, counter[c]);
    }
    cout << mini << endl;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S
#include <iostream>
#include <vector>
using namespace std;
int main() {
    string s;
    cin >> s;
    int count = 0, num = 0;
    vector<string> Bstring;
    string Cchar = "";
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'R')
            count++;
        else if (s[i] == 'L')
            count--;
        Cchar += s[i];
        if (count == 0) {
            num++;
            Bstring.push_back(Cchar);
            Cchar = "";
        }
    }
    cout << num << endl;
    for (string substring : Bstring) {
        cout << substring << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/T
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str, username, pwd, profile, role, key;
    int eq = 0;
    cin >> str;
    int size = str.length();
    for (int i = 0; i < size; i++) {
        if (str[i] == '=') {
            eq++;
            i++;
            if (eq == 1){
                while (i < str.length() && str[i] != '&' && str[i] != '=')
                    username.push_back(str[i++]);
            } else if (eq == 2) {
                while (i < str.length() && str[i] != '&' && str[i] != '=')
                    pwd.push_back(str[i++]);
            } else if (eq == 3) {
                while (i < str.length() && str[i] != '&' && str[i] != '=')
                    profile.push_back(str[i++]);
            } else if (eq == 4) {
                while (i < str.length() && str[i] != '&' && str[i] != '=')
                    role.push_back(str[i++]);
            } else if (eq == 5) {
                while (i < str.length() && str[i] != '&' && str[i] != '=')
                    key.push_back(str[i++]);
            }
        }
    }
    cout << "username: " << username << '\n' << "pwd: " << pwd << '\n' << "profile: " << profile << '\n';
    cout  << "role: " << role << '\n' << "key: " << key << '\n';
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/X
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s, x, y;
    cin >> s;
    string small = s;
    if (s.length() == 1)
        cout << s;
    else{
        for(int i = 1; i < s.length(); ++i){
            x = s.substr(0, i);
            y = s.substr(i);
            sort(x.begin(), x.end());
            sort(y.begin(), y.end());
            string combined = x + y;
            if(combined < small) small = combined;
        }
        cout << small;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/W
#include <iostream>
using namespace std;
int main(){
    string s, key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-"*"/";   // remove "" around *
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int q;
    cin >> q;
    cin >> s;
    if (q == 1){
        for (int i = 0; i < s.length(); ++i){
            for (int j = 0; j < Original.length(); ++j)
                if (s[i] == Original[j]) cout << key[j];
        }
    }
    else{
        for (int i = 0; i < s.length(); ++i){
            for (int j = 0; j < key.length(); ++j)
                if (s[i] == key[j]) cout << Original[j];
        }
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
#include <iostream>
using namespace std;
int main(){
    string s, word = "EGYPT";
    cin >> s;
    for(int i =0 ; i < s.length(); ++i){
        if(s[i] == 'E' && s.substr(i, 5) == word){
            s.erase(i, 5);
            s.replace(i, 0, " ");
        }
    }
    cout << s;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/N
#include <iostream>
using namespace std;
int main() {
    int n,  Max = 1;
    string s;
    cin >> n;
    cin >> s;
    char lastChar = s[0];
    for (int i = 1; i < n; ++i) {
        if (s[i] != lastChar) {
            Max++;
            lastChar = s[i];
        }
    }
    cout << Max << endl;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M
#include <iostream>
using namespace std;
int main(){
    string s, word = "hello";
    int x =0;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == word[x]) x++;
    }
    cout << (x == 5 ? "YES" : "NO");
}

// https://codeforces.com/problemset/problem/1999/A
#include <iostream>
using namespace std;
int main(){
    int n;
    string num;
    cin >> n;
    while(n--){
        cin >> num;
        int sum = 0;
        for(char c : num) sum += c - '0';
        cout << sum << endl;
    }
}

// https://codeforces.com/problemset/problem/1999/C
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int T, timeinterval, showerduration, minutes, start, end;
    scanf("%d", &T);
    while (T--) {
        cin >> timeinterval >> showerduration >> minutes;
        vector<int> duration(minutes + 1, 0);
        cin >> start >> end;
        for (int i = start; i < end; i++)
            duration[i]++;
        int x = 0;
        for (int i = 0; i < duration.size(); i++) {
            (duration[i] == 0 ? ++x : x = 0);
            if (x == 0) i = end;
            if (x >= showerduration) {
                cout << "YES" << endl;
                break;
            }
        }
        if (x < showerduration) cout << "NO" << endl;
    }
}

// https://codeforces.com/problemset/problem/1999/C
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    vector<pair<int, int>> v;
    for(int i = 1; i <= a; i++) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        v.push_back({temp1, temp2});
    }
    sort(v.begin(),v.end());
    int innit = v[0].first;
    if (innit >= b){
        cout << "YES" << endl;
        return;
    }
    int last = v[0].second;
    for(int i = 1; i < a; i++) {
        if(v[i].first > last){
            if(v[i].first-last >= b){
                cout << "YES" << endl;
                return;
            }
        }
        last = max(last,v[i].second);
    }
    if(c-last >= b){
        cout << "YES" << endl;
        return;
    }
    else
        cout << "NO" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();
}

// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A
#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    cout << (n-k >= 0? n-k : 0);
}

// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i + j == N - 1 && i == j) cout << "X";
            else if (i == j) cout << "\\";
            else if ( i + j == N - 1 ) cout << "/";
            else cout << "*";
        }
        cout << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B
#include <iostream>
using namespace std;
int print(int n){
    for(int i = 1; i <= n; ++i){
        cout << i;
        if(i!= n) cout << " ";
    }
    return 0;
}
int main(){
    int n;
    cin >> n;
    print(n);
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C
#include <iostream>
#include <vector>
using namespace std;
bool odd(int n){
    if(n % 2 != 0) return true;
    return false;
}
bool palindrome(int n){
    vector<int> BinaryRep;
    // binary representation
    while(n > 0){
        BinaryRep.push_back(n % 2);
        n /= 2;
    }
    for(int i = 0; i < BinaryRep.size() / 2; i++){
        if(BinaryRep[i] != BinaryRep[BinaryRep.size() - i - 1]) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    cout << (palindrome(n) && odd(n) ? "YES" : "NO");
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D
#include <iostream>
#include <cmath>
using namespace std;
bool Prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        cout << (Prime(n) ? "YES" : "NO") << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Y
#include <bits/stdc++.h>
using namespace std;
int main () {
    string value;
    int cost[26];
    cin>>value;
    for(int i=0;i<26;i++){
        cin>>cost[i];
    }
    int size = value.size();
    int counter = 0;
    for(int i=0;i<size;i++){
        counter = 0;
        if(value[i] == '?'){
            for(int z=i;z<size;z++){
                if(value[z] == '?') counter++;
                else break;
            }
            if(counter == size){
                cout<<"0"<<endl;
                for(int z = 0;z<size;z++){
                    cout<<"a";
                }
                return 0;
            } else {
                if(i == 0){
                    int ma = INT_MAX,index;
                    for(int z = 0;z<value[counter]-97+1;z++){
                        int mycost=abs(cost[value[counter]- 97] - cost[z]);
                        if(mycost < ma){
                            ma = mycost;
                            index = z;
                        }
                    }
                    char c = index+97;
                    for(int z=0;z<counter;z++){
                        value[z] =c;
                    }
                    i+=counter;
                } else if (i+counter == size){
                    int ma = INT_MAX,index;
                    for(int z = 0;z<value[i-1]-97+1;z++){
                        int mycost=abs(cost[value[i-1]- 97] - cost[z]);
                        if(mycost < ma){
                            ma = mycost;
                            index = z;
                        }
                    }
                    char c = index+97;
                    for(int z=i;z<size;z++){
                        value[z] =c;
                    }
                    break;
                } else {
                    int ma = INT_MAX,index;
                    for(int z=0;z<26;z++){
                        int mycost = abs(cost[value[i-1] - 97] - cost[z]) +
                                     abs(cost[z] - cost[value[i+counter] -97]);
                        if(mycost < ma){
                            ma = mycost;
                            index = z;
                        }
                    }
                    char c = index+97;
                    for(int z=i;z<i+counter;z++){
                        value[z] =c;
                    }
                    i+=counter;
                }
            }
        }
    }
    long long finalCost = 0;
    for(int i =0;i<size - 1;i++){
        finalCost += abs(cost[value[i] - 97] - cost[value[i+1] - 97]);
    }
    cout<<finalCost<<endl;
    cout<<value<<endl;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Y
// Minimized version
#include <bits/stdc++.h>
using namespace std;
int main() {
    string value;
    int cost[26];
    cin >> value;
    for (int i = 0; i < 26; i++)
        cin >> cost[i];
    int size = value.size();
    for (int i = 0; i < size;) {
        if (value[i] == '?') {
            int start = i;
            while (i < size && value[i] == '?') i++;
            int end = i;
            char left_char = (start > 0) ? value[start - 1] : 'a';
            char right_char = (end < size) ? value[end] : 'a';
            int min_cost = INT_MAX, best_char = 0;
            for (int z = 0; z < 26; z++) {
                int left_cost = (start > 0) ? abs(cost[left_char - 'a'] - cost[z]) : 0;
                int right_cost = (end < size) ? abs(cost[z] - cost[right_char - 'a']) : 0;
                int current_cost = left_cost + right_cost;
                if (current_cost < min_cost) {
                    min_cost = current_cost;
                    best_char = z;
                }
            }
            fill(value.begin() + start, value.begin() + end, 'a' + best_char);
        }
        else i++;
    }
    long long finalCost = 0;
    for (int i = 0; i < size - 1; i++) {
        finalCost += abs(cost[value[i] - 'a'] - cost[value[i + 1] - 'a']);
    }
    cout << finalCost << endl;
    cout << value << endl;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E
#include <iostream>
using namespace std;
void swap(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b;
}
int main() {
    int a, b;
    cin >> a >> b;
    swap(a, b);
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
#include <iostream>
#define intt long long
using namespace std;
intt power(intt X, intt power) {
    intt result = 1;
    for (intt i = 0; i < power; ++i)
        result *= X;
    return result;
}
intt equation(intt X, intt N) {
    intt sum = 0;
    if (N == 0) sum = power(X, 0) - 1;
    else {
        sum += power(X, 0) - 1;
        for (intt i = 2; i <= N; i += 2)
            sum += power(X, i);
    }
    return sum;
}
int main() {
    intt X, N;
    cin >> X >> N;
    cout << equation(X, N) << endl;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G
#include <iostream>
#define intt long long
using namespace std;
void MaxandMIN(intt array[], intt size){
    intt max = array[0];
    intt min = array[0];
    for(intt i = 1; i < size; i++){
        if(array[i] > max) max = array[i];
        if(array[i] < min) min = array[i];
    }
    cout << min << " " << max;
}
int main(){
    intt n;
    cin >> n;
    intt array[n];
    for(intt i = 0; i < n; i++)
        cin >> array[i];
    MaxandMIN(array, n);
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H
#include <iostream>
using namespace std;
void print_smth(int n, char c){
    for(int i = 0; i < n; ++i){
        if(i == n - 1) cout << c;
        else cout << c << " ";
    }
    cout << endl;
}
int main (){
    int T, n;
    char c;
    cin >> T;
    while(T--){
        cin >> n >> c;
        print_smth(n, c);
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I
#include <iostream>
using namespace std;
void swap_rows_columns(int array[500][500], int n, int x, int y) {
    for (int i = 0; i < n; i++) swap(array[x-1][i], array[y-1][i]);
    for (int i = 0; i < n; i++) swap(array[i][x-1], array[i][y-1]);
}
int main() {
    int n, x, y;
    cin >> n >> x >> y;
    int arr[500][500];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) cin >> arr[i][j];
    }
    swap_rows_columns(arr, n, x, y);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/J
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
void average(int n, vector<double> nums) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    cout << fixed << setprecision(6) << sum / n << endl;
}
int main() {
    int n;
    cin >> n;
    vector<double> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    average(n, nums);
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/K
#include <iostream>
using namespace std;
void shift_right(int array[], int n, int shift){
    for(int i= n - shift ; i < n; i++) cout << array[i] << " ";
    for(int i = 0; i < n - shift; i++) cout << array[i] << " ";
    cout << endl;
}
int main() {
    int n, x;
    cin >> n >> x;
    int shift = x % n;
    int array[n];
    for(int i = 0; i < n; i++) cin >> array[i];
    shift_right(array, n, shift);
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
#include <iostream>
using namespace std;
void new_array(int arr[], int array[], int n){
    for(int i = 0; i < n; i++) cout << array[i] << " ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}
int main(){
    int n ;
    cin >> n;
    int arr[n], array[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++) cin >> array[i];
    new_array(arr, array, n);
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N
#include <iostream>
using namespace std;
void shift_zeros(int array[], int n){
    int count = 0;
    for(int i=0; i< n; ++i){
        if(array[i] == 0) count++;
        else cout << array[i] << " ";
    }
    for(int i=0; i< count; ++i) cout << "0 ";
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    shift_zeros(arr, n);
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/A
#include <iostream>
#include <cmath>
using namespace std;
bool is_power_of_two(long long n){
    if(floor(log2(n)) == log2(n))
        return true;
    return false;
}
int main(){
    long long n;
    cin >> n;
    cout << (is_power_of_two(n) ? "YES" : "NO");
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/M
#include <iostream>
#include <algorithm>
#define innt long long
using namespace std;
void distinct(innt array[], innt n){
    if(n == 0){
        cout << 0;
        return;
    }
    innt count = 1;
    sort(array, array + n);
    for(innt i = 0; i < n - 1; i++) if (array[i] != array[i + 1]) count++;
    cout << count;
}
int main(){
    innt n;
    cin >> n;
    innt array[n];
    for(innt i=0; i< n; ++i) cin >> array[i];
    distinct(array, n);
}

// https://codeforces.com/problemset/problem/1997/A
#include <iostream>
using namespace std;
int calculate_time(string s) {
    int n = s.size();
    int time = 2;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) time += 1;
        else time += 2;
    }
    return time;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int max_time = 0;
        string pass = s;
        for (int i = 0; i <= s.size(); i++) {
            for (char c = 'a'; c <= 'z'; c++) {
                string temp = s.substr(0, i) + c + s.substr(i);
                int temp_time = calculate_time(temp);
                if (temp_time > max_time) {
                    max_time = temp_time;
                    pass = temp;
                }
            }
        }
        cout << pass << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/O
#include <iostream>
#include <cmath>
using namespace std;
int prime_count(int array[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] <= 1) continue;
        bool is_prime = true;
        for (int j = 2; j <= sqrt(array[i]); j++) {
            if (array[i] % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) count++;
    }
    return count;
}

int maxx(int array[], int n) {
    int maxx = array[0];
    for(int i = 1; i < n; i++) if(array[i] > maxx) maxx = array[i];
    return maxx;
}

int minn(int array[], int n) {
    int minn = array[0];
    for(int i = 1; i < n; i++) if(array[i] < minn) minn = array[i];
    return minn;
}

int countDivisor(int num){
    int m = num / 2;
    int counter = 0;
    for(int z = 1;z<= m;z++)
        if(num % z == 0) counter++;
    return counter;
}
int palindrome_count(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++){
        string s = to_string(arr[i]);
        int j = 0, k = s.size() - 1;
        while(j < k){
            if(s[j] != s[k]) break;
            j++; k--;
        }
        if(j >= k) count++;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++) cin >> arr[i];
    int prime_count_result = prime_count(arr, n);
    int maxx_num = maxx(arr, n);
    int minn_num = minn(arr, n);
    int palindrome_count_result = palindrome_count(arr, n);
    cout << "The maximum number : " << maxx_num << endl;
    cout << "The minimum number : " << minn_num << endl;
    cout << "The number of prime numbers : " << prime_count_result << endl;
    cout << "The number of palindrome numbers : " << palindrome_count_result << endl;
    int c;
    int max;
    int index;
    for(int i=0;i<n;i++){
        c = countDivisor(arr[i]);
        if(i == 0){
            max = c;
            index = i;
        } else {
            if(c >= max){
                max = c;
                index = i;
            }
        }
    }
    cout<<"The number that has the maximum number of divisors : "<<arr[index]<<endl;
}

//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/O
#include<bits/stdc++.h>
using namespace std;
int countDivisor(int num){
    int m = num / 2;
    int counter = 0;
    for(int z = 1;z<= m;z++){
        if(num % z == 0){
            counter++;
        }
    }
    return counter;
}
bool palindrome(int num){
    int temp = num;
    int sum = 0;
    int d;
    while(num > 0){
        d = num % 10;
        sum=(sum*10) + d;
        num /= 10;
    }
    if(temp == sum)return true;
    else return false;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++) cin>>arr[i];
    sort(arr,arr+size);
    cout<<"The maximum number : "<<arr[size - 1]<<endl;
    cout<<"The minimum number : "<<arr[0]<<endl;
    int countPrime = 0;
    int countPalindrome = 0;
    for(int i =0;i<size;i++){
        if(palindrome(arr[i])){
            countPalindrome++;
        }
        int m = arr[i] / 2; // 50
        int flag = 0;
        for(int z = 2;z<= m;z++){
            if(arr[i] % z == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0 && arr[i] != 1)  countPrime++;
    }
    cout<<"The number of prime numbers : "<<countPrime<<endl;
    cout<<"The number of palindrome numbers : "<<countPalindrome<<endl;
    int c;
    int max; // 4
    int index; // 3
    for(int i=0;i<size;i++){
        c = countDivisor(arr[i]);
        if(i == 0){
            max = c;
            index = i;
        } else {
            if(c >= max){
                max = c;
                index = i;
            }
        }
    }
    cout<<"The number that has the maximum number of divisors : "<<arr[index]<<endl;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/C
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
    ll n, k, all = 0, even = 0, odd = 0;
    cin >> n >> k;
    ll s = min(n, k), t = max(n, k);
    all = ((t - s + 1) * (s + t) ) / 2;
    ll firstEven = (s % 2 == 0) ? s : s + 1;
    ll lastEven = (t % 2 == 0) ? t : t - 1;
    even = ((lastEven - firstEven) / 2 + 1) * (firstEven + lastEven) / 2;
    ll firstOdd = (s % 2 != 0) ? s : s + 1;
    ll lastOdd = (t % 2 != 0) ? t : t - 1;
    odd =  ((lastOdd - firstOdd) / 2 + 1) * (firstOdd + lastOdd) / 2;
    cout << all << endl << even << endl << odd << endl;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/B
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int main(){
    ll n;
    bool prime = true;
    cin >> n;
    if(n == 1) prime = false;
    for(ll i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            prime = false;
            break;
        }
    }
    cout << (prime? "YES" : "NO") << endl;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/D
#include <iostream>
#define ll long long
using namespace std;
int main() {
    ll a, b, q;
    cin >> a >> b >> q;
    ll result = q % 3;
    if(result == 1) cout << a;
    else if(result == 2) cout << b;
    else cout << (a ^ b);
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/E
#include<bits/stdc++.h>
using namespace std;
int main() {
	long long num;
	cin>>num;
	for(long long i=1;;i++){
		if(i > num){
			cout << i-1;
			return 0;
		}
		else num -= i;
	}
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/G
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int main() {
    ll n, sum = 0;
    cin >> n;
    for(ll i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            sum += i;
            if(i!= sqrt(n)) sum += n/i;
        }
    }
    cout << sum << endl;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
#include <iostream>
using namespace std;
void print(int n) {
    if (n <= 0) return;
    cout << "I love Recursion" << endl;
    print(n - 1);
}
int main() {
    int n;
    cin >> n;
    print(n);
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B
#include <iostream>
using namespace std;
void print(int n, int num ){
    if (num > n) return;
    cout << num << endl;
    print(n, num + 1);
}
int main() {
    int n;
    cin >> n;
    print(n, 1);
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
#include <iostream>
using namespace std;
void print(int n){
    if (n <= 0) return;
    else if (n == 1) cout << n;
    else cout << n << " ";
    print(n-1);
}
int main() {
    int n;
    cin >> n;
    print(n);
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E
#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        string s;
        cin >> n;
        while(n > 0){
            s +=  to_string(n % 2);
            n /= 2;
        }
        for(int i = s.size() - 1; i >= 0; i--) cout << s[i];
        cout << "\n";
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/G
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) cout << "*";
        cout << endl;
    }
}

//https://codeforces.com/contest/1526/problem/C2
#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
int main(){
    ll n, health = 0, result = 0;
    cin >> n;
    vector<ll> potion(n);
    for(ll i = 0; i < n; i++) cin >> potion[i];
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i = 0; i < n; i++) {
        health += potion[i];
        pq.push(potion[i]);
        result++;
        if (health < 0) {
            health -= pq.top();
            pq.pop();
            result--;
        }
    }
    cout << result << endl;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/E
#include <iostream>
#define ll long long
using namespace std;
int main(){
    ll n, p, q, res = 0;
    cin >> n;
    while (n--){
        cin >> p >> q;
        if ((q-p) >= 2) ++res;
    }
    cout << res;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/F
#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) for (int j = 0; j < m; ++j) cout << "#";
        else {
            if ((i / 2) % 2 == 0) {
                for (int j = 0; j < m - 1; ++j) cout << ".";
                cout << "#";
            }
            else {
                cout << "#";
                for (int j = 1; j < m; ++j) cout << ".";
            }
        }
        cout << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/S
#include <iostream>
using namespace std;
int main() {
    int n, k, sum = 0;
    cin >> n >> k;
    while(n--) {
        string num;
        cin >> num;
        bool found[10] = {false};
        for (char c : num) found[c - '0'] = true;
        bool is_good = true;
        for (int digit = 0; digit <= k; ++digit) {
            if (!found[digit]) {
                is_good = false;
                break;
            }
        }
        if (is_good) sum++;
    }
    cout << sum << endl;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
#include <iostream>
using namespace std;
void print(string str, int s){
    if(s == str.size()) return;
    cout << str[s] << " ";
    print(str, s+1);
}
int main(){
    int n;
    string str;
    cin >> n;
    while(n--){
        cin >> str;
        print(str, 0);
        cout << "\n";
    }
}

// https://codeforces.com/problemset/problem/2004/B
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int l, r, L, R;
        cin >> l >> r >> L >> R;
        cout << max(min(r, R) - max(l, L) + (R != r) + (l != L), 1) << endl;
    }
}

// https://codeforces.com/group/bmMQ9syPqS/contest/545102/problem/O
#include <iostream>
using namespace std;
int main() {
    string s, f_num, s_num;
    char sign;
    cin >> s;
    bool found = false;
    for(int i = 0; i < s.length(); ++i){
        if(!found && s[i] != '*' && s[i] != '+' && s[i] != '-' && s[i] != '/') f_num.push_back(s[i]);
        else if (!found && (s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/')) {
            sign = s[i];
            found = true;
        }
        else s_num.push_back(s[i]);
    }
    int num1 = stoi(f_num), num2 = stoi(s_num);
    if (sign == '*') cout << num1 * num2 << endl;
    else if (sign == '+') cout << num1 + num2 << endl;
    else if (sign == '-') cout << num1 - num2 << endl;
    else if (sign == '/') cout << num1 / num2 << endl;
}

// https://codeforces.com/group/bmMQ9syPqS/contest/545102/problem/Y
#include <iostream>
using namespace std;
int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    A = A % 100;
    B = B % 100;
    C = C % 100;
    D = D % 100;
    long long result = (A * B % 100) * (C * D % 100) % 100;
    if (result < 10) cout << "0" << result << endl;
    else cout << result << endl;
}

//https://codeforces.com/group/bmMQ9syPqS/contest/545102/problem/U
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double n;
    cin >> n;
    if (ceil(n) != n || floor(n) != n) {
        cout << "float ";
        string num = to_string(n);
        int index = num.find('.');
        cout << num.substr(0, index) << " 0";
        for(int i = index; i < num.length() - index; i++)
            cout << num[i];
    }
    else cout << "int " << n;
}

// https://codeforces.com/gym/545102/problem/X
#include <iostream>
#define ll long long
using namespace std;
int main() {
    ll l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    ll start = max(l1, l2);
    ll end = min(r1, r2);
    if (start <= end) cout << start << " " << end << endl;
    else cout << -1 << endl;
}

// https://codeforces.com/problemset/problem/2010/A
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        long long n, sum = 0;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) sum += (a[i] * pow(-1, i));
        cout << sum << endl;
    }
}

// https://codeforces.com/contest/2010/problem/B
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    cout << 6 - (a+b);
}

// https://codeforces.com/contest/2004/problem/A
#include <iostream>
using namespace std;
int main() {
    int t, n, a[40];
    cin >> t;
    while(t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        cout << ((n == 2 && a[2] - a[1] > 1) ? "YES" : "NO") << endl;
    }
}

// https://codeforces.com/group/Rilx5irOux/contest/538517/problem/C
#include <iostream>
using namespace std;
int main() {
    long long N;
    // "aaab"
    cin >> N;
    // 5       6        7         9           10            11          12
    // aaaba , aaabaa , aaabaaa , aaabaaaba , aaabaaabaa , aaabaaabaaa , aaabaaabaaab
    // aabaa , aabaaa , aabaaab , aabaaabaa , aabaaabaaa , aabaaabaaab , aabaaabaaaba
    // abaaa , abaaab , abaaaba , abaaabaaa , abaaabaaab , abaaabaaaba , abaaabaaabaa
    long long Bs = N / 4;
    cout << Bs;
}

// https://codeforces.com/problemset/problem/112/A
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);
    if (a < b) cout << -1 << endl;
    else if (a > b) cout << 1 << endl;
    else cout << 0 << endl;
}

// https://codeforces.com/contest/1353/problem/B
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        int x = n - 1;
        for (int i = 0; i < k; i++){
            a[i] = max(a[i], b[x]);
            x--;
        }
        int sum = 0;
        for (int i = 0; i < n; i++) sum += a[i];
        cout << sum << endl;
    }
}

// https://codeforces.com/contest/1353/problem/A
#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        if(n == 1) cout << 0 << endl;
        else if(n == 2) cout << m <<endl;
        else cout << 2 * m << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/Q
#include <iostream>
using namespace std;
int main() {
    long long L, R, M;
    cin >> L >> R >> M;
    long long product = 1;
    for (int i = L; i <= R; ++i) product = (product * i) % M;
    cout << product;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/R
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    long long x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << fixed << setprecision(9) << distance;
}

// https://codeforces.com/group/sEYb6nV9FM/contest/543085/problem/A
#include <iostream>
using namespace std;
int main() {
    int n, s, ones = 0, twos = 0, threes = 0, fours = 0;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s == 1) ones++; // 1
        else if (s == 2) twos++; // 1
        else if (s == 3) threes++; // 2
        else fours++; // 1
    }
    // 1 2 4 3 3
    int taxis = fours + threes + (twos + 1) / 2;  // Groups of 4, 3, and 2
              // 1 + 2 + (1 + 1) / 2 = 4
    ones -= min(ones, threes);  // Each group of 3 can take one group of 1
    if (twos % 2) ones = max(0, ones - 2);  // One remaining group of 2 can take two 1s
    taxis += (ones + 3) / 4;  // Groups of 1 need taxis
    cout << taxis;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/S
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (c + b > a)){
        cout << "Valid" << endl;
        double s = (a + b + c) / 2.0;
        // this is called heron's formula
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << fixed << setprecision(6) << area;
    }
    else cout << "Invalid";
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/M
#include <iostream>
using namespace std;
int main() {
    string N;
    int X;
    cin >> N >> X;
    long long rem = 0;
    for (char digit : N) {
        rem = (rem * 10 + (digit - '0')) % X;
    }
    cout << (rem == 0 ? "YES" : "NO");
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/U
#include <iostream>
using namespace std;
int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << (((x2 - x1) * (y3 - y1)) - ((y2 - y1) * (x3 - x1)) == 0 ? "YES" : "NO");
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/T
#include <iostream>
using namespace std;
int main() {
    int x, y, r, n;
    cin >> x >> y >> r >> n;
    while (n--) {
        int x1, y1;
        cin >> x1 >> y1;
        if ((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y) <= r * r)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/X
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int x_min = min({x1, x2, x3, x4});
    int x_max = max({x1, x2, x3, x4});
    int y_min = min({y1, y2, y3, y4});
    int y_max = max({y1, y2, y3, y4});
    int n;
    cin >> n;
    while (n--) {
        int x, y;
        cin >> x >> y;
        if (x >= x_min && x <= x_max && y >= y_min && y <= y_max) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/W
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int X1, Y1, X2, Y2, X3, Y3, X4, Y4;
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
    double C1x = (X1 + X2) / 2.0;
    double C1y = (Y1 + Y2) / 2.0;
    double C2x = (X3 + X4) / 2.0;
    double C2y = (Y3 + Y4) / 2.0;
    double r1 = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2)) / 2.0;
    double r2 = sqrt(pow(X4 - X3, 2) + pow(Y4 - Y3, 2)) / 2.0;
    double distance = sqrt(pow(C2x - C1x, 2) + pow(C2y - C1y, 2));
    if (distance <= (r1 + r2) && distance >= abs(r1 - r2)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/V
#include <iostream>
using namespace std;
int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    double slope1 = (y2 - y1) / (x2 - x1);
    double slope2 = (y4 - y3) / (x4 - x3);
    if (slope1 == slope2) cout << "YES" << endl;
    else cout << "NO" << endl;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/Z
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int R, S;
    cin >> R >> S;
    if (2 * R <= S) cout << "Square";
    else if (2 * R >= sqrt(2) * S)  cout << "Circle";
    else cout << "Complex";
}

// https://codeforces.com/group/pKuPth1CKi/contest/489552/problem/A
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s, a;
    cin >> s;
    for(int i = 0; i < n; i++){
        // 00111
        // 01010101
        // 101
        // 101
        if (i == n -1){
            if (s[i] == '1') a += '1';
            else a += "0";
        }
        else{
            if(s[i] == '0' && s[i+1] == '0') a += "01";
            else if(s[i] == '1' && s[i+1] == '1') a += "10";
            else if(s[i] == '1' && s[i+1] == '0') a += "1";
            else a += "0";
        }
    }
    cout << a;
}

// https://codeforces.com/group/pKuPth1CKi/contest/486236/problem/A
#include <iostream>
using namespace std;
string remove_repeated_chars(const string &s) {
    string result;
    for (char c : s) if (result.find(c) == string::npos) result += c;
    return result;
}
int main() {
    int n;
    string a, b;
    cin >> n;
    cin >> a >> b;
    a = remove_repeated_chars(a);
    b = remove_repeated_chars(b);
    if (a.size() == 1 && b.size() == 1) cout << "NO";
    else cout << "YES";
}

// https://codeforces.com/group/pKuPth1CKi/contest/486236/problem/B
// Extraaaaaaaaaa hard
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<string> players(n);
        for(int i = 0; i < n; i++) cin >> players[i];
        vector<int> target_scores(m);
        for(int i = 0; i < m; i++) target_scores[i] = 1;
        bool can_win = true;
        for(int i = 1; i < n; i++) {
            int mahmoud_score = 0, other_score = 0;
            for(int j = 0; j < m; j++) {
                if(players[0][j] == '1') mahmoud_score += target_scores[j];
                if(players[i][j] == '1') other_score += target_scores[j];
            }
            if(other_score >= mahmoud_score) {
                can_win = false;
                break;
            }
        }
        if(can_win) {
            cout << "YES\n";
            for(int i = 0; i < m; i++) cout << target_scores[i] << (i == m-1 ? '\n' : ' ');
        } else cout << "NO\n";
    }
}

// https://codeforces.com/group/9w9xt8C4av/contest/501951/problem/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        int needed = x - a[i].first;
        int low = i + 1, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (a[mid].first == needed) {
                cout << a[i].second << " " << a[mid].second;
                return 0;
            }
            if (a[mid].first < needed) low = mid + 1;
            else high = mid - 1;
        }
    }
    cout << -1;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/V
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    bool rated = false;
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
        if (a[i] != b[i]) rated = true;
    }
    if (rated) {
        cout << "rated";
        return 0;
    }
    for (int i = 1; i < n; ++i) {
        if (a[i] > a[i - 1]) {
            cout << "unrated";
            return 0;
        }
    }
    cout << "maybe";
}

// https://codeforces.com/problemset/problem/977/A
#include <iostream>
using namespace std;
int main() {
    long long n , k;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        if (n % 10 != 0) n--;
        else n /= 10;
    }
    cout << n;
}

// https://codeforces.com/problemset/problem/59/A
#include <iostream>
using namespace std;
int main() {
    string w;
    int small = 0 , capital = 0;
    cin >> w;
    for(int i = 0; i < w.length(); i++){
        if (islower(w[i])) small++;
        else capital++;
    }
    if(small > capital || small == capital) for(int i = 0; i < w.length(); i++) cout << char(tolower(w[i]));
    else if(small < capital) for(int i = 0; i < w.length(); i++) cout << char(toupper(w[i]));
}

// https://codeforces.com/problemset/problem/2009/A
#include <iostream>
using namespace std;
int main() {
    int a, b, T;
    cin >> T;
    while(T--){
        int minn = 1e9;
        cin >> a >> b;
        for(int i = a; i <= b; i++){
            if((i-a)+(b-i) < minn) minn =(i-a)+(b-i);
        }
        cout << minn << endl;
    }
}

// https://codeforces.com/problemset/problem/546/A
#include <iostream>
using namespace std;
int main() {
    int k, n, w, price = 0;
    cin >> k >> n >> w;
    for(int i = 1; i <= w; ++i) price += (i * k);
    cout << ((price - n ) < 0 ? 0 : price - n );
}

//https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/L
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int sereja = 0, dima = 0;
    int l = 0, r = n - 1;
    bool serejaTurn = true;
    while (l <= r) {
        if (a[l] > a[r]) {
            if (serejaTurn) sereja += a[l];
            else dima += a[l];
            l++;
        }
        else {
            if (serejaTurn) sereja += a[r];
            else dima += a[r];
            r--;
        }
        // السطر دده مسؤول عن تبديل الادوار
        serejaTurn = !serejaTurn;
    }
    cout << sereja << " " << dima << endl;
}

// https://codeforces.com/group/9w9xt8C4av/contest/501951/problem/B
#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int minutesLeft = 240 - k, timeSpent = 0, problemsSolved = 0;
    for (int i = 1; i <= n; i++) {
        timeSpent += 5 * i;
        if (timeSpent > minutesLeft) break;
        problemsSolved = i;
    }
    cout << problemsSolved;
}

// https://codeforces.com/contest/2014/problem/A
#include <iostream>
using namespace std;
int main() {
    int t, n, k;
    cin >> t;
    while (t--){
        int thenumberofpeoplethatwillgetgoldfromRobinHood = 0, whatrobinhas = 0 ;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            if (a[i] >= k) whatrobinhas += a[i];
            if (a[i] == 0 && whatrobinhas > 0){
                thenumberofpeoplethatwillgetgoldfromRobinHood++;
                whatrobinhas--;
            }
        }
        cout << thenumberofpeoplethatwillgetgoldfromRobinHood << endl;
    }
}

// https://codeforces.com/problemset/problem/271/A
#include <iostream>
#include <set>
using namespace std;
bool hasDistinctDigits(int year) {
    string yearStr = to_string(year);
    set<char> digits(yearStr.begin(), yearStr.end());
    return digits.size() == yearStr.size();
}
int main() {
    int year;
    cin >> year;
    for (int i = year + 1; i <= 9999; ++i){
        if(hasDistinctDigits(i)){
            cout << i;
            break;
        }
    }
}

// https://codeforces.com/problemset/problem/486/A
#include <iostream>
using namespace std;
int main() {
    long long n, sum;
    cin >> n;
    if (n % 2 == 0) sum = n / 2;
    else sum = -(n / 2 + 1);
    cout << sum << endl;
}

// https://codeforces.com/problemset/problem/732/A
#include <iostream>
using namespace std;
int main() {
    long long k, r;
    bool found = false;
    cin >> k >> r;
    for(long long i = 1; i <= 1000000 && !found; ++i){
        if ((i * k) % 10 == r || (i * k) % 10 == 0){
            cout << i;
            found = true;
        }
    }
}

// https://codeforces.com/gym/101102/problem/E
#include <iostream>
using namespace std;
int main() {
    int t;
    long long int n;
    cin >> t;
    while (t--) {
        cin >> n;
        // mimics the behavior of ceil function
        // Use integer division and add 1 if there's a remainder
        cout << (n + 4) / 5 << endl;
    }
}

// https://codeforces.com/problemset/problem/1030/A
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
        if(a[i] == 1){
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<vector<int>> cube(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cin >> cube[i][j];
    }
    int minSteps = INT_MAX;
    for (int target = 1; target <= 6; target++) {
        int steps = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (cube[i][j] != target) {
                    steps++;
                }
            }
        }
        minSteps = min(minSteps, steps);
    }
    cout << minSteps << endl;
}

// https://codeforces.com/problemset/problem/677/A
#include <iostream>
using namespace std;
int main(){
    int n, h;
    int result = 0;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] <= h) result++;
        else result += 2;
    }
    cout << result;
}

// https://codeforces.com/problemset/problem/116/A
#include <iostream>
using namespace std;
int main() {
    int n;
    int cap = 0;
    cin >> n;
    int arr[n];
    int x, y;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        cap = cap - x;
        cap = cap + y;
        arr[i] = cap;
    }
    int maxx = arr[0];
    for (int i = 0; i < n ; ++i){
        if (arr[i] > maxx) maxx = arr[i];
    }
    cout << maxx;
}

// https://codeforces.com/problemset/problem/467/A
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int res = 0;
    int x, y;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        if (y - x >= 2) res++;
    }
    cout << res;
}

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

// https://codeforces.com/problemset/problem/136/A
#include <iostream>
#include <map>
using namespace std;
int main() {
    int n, num;
    cin >> n;
    map<int, int> friends;
    for (int i = 0; i < n ; ++i){
        cin >> num;
        friends[num] = i;
    }
    for (auto& pair : friends) {
        cout << pair.second + 1 << ' ';
    }
}

// https://codeforces.com/problemset/problem/520/A
#include <iostream>
#include <set>
using namespace std;
int main() {
    int n;
    cin >> n;
    string sentence;
    cin >> sentence;
    if (n < 26) {
        cout << "NO" << endl;
        return 0;
    }
    else{
        set<char> alphabets;
        for (int i = 0; i < n; ++i) {
            alphabets.insert(tolower(sentence[i]));
        }
        cout << (alphabets.size() == 26 ? "YES" : "NO") << endl;
    }
}

//https://codeforces.com/problemset/problem/1985/A
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string word1, word2;
    for (int i = 0; i < n; ++i) {
        cin >> word1 >> word2;
        cout << word2[0] + word1.substr(1, 2) << " " << word1[0]+word2.substr(1, 2) << endl;
    }
}

//https://codeforces.com/problemset/problem/266/B
#include <iostream>
using namespace std;
int main(){
    int n, t;
    string queue, result_queue;
    cin >> n >> t;
    cin >> queue;
    result_queue = q
    queue;
    for (int j = 0; j < t; ++j) {
        for (int i = 0; i < n; ++i) {
            if(queue[i] == 'B' && queue[i+1] == 'G'){
                swap(result_queue[i], result_queue[i+1]);
            }
        }
        queue = result_queue;
    }
    for (int i = 0; i < n; ++i) {
        cout << result_queue[i];
    }
}

// https://codeforces.com/problemset/problem/469/A
#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> Result;
    int p;
    cin >> p;
    for (int i = 0; i < p; ++i) {
        int level;
        cin >> level;
        Result.insert(level);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int level;
        cin >> level;
        Result.insert(level);
    }
    cout << (Result.size() == n? "I become the guy." : "Oh, my keyboard!");
}

// https://codeforces.com/problemset/problem/144/A
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);

    for (int i = 0; i < n; ++i) cin >> heights[i];

    int leftMax = *max_element(heights.begin(), heights.end());
    int leftPos = 0;
    for (int i = 0; i < n; ++i) {
        if(leftMax == heights[i]){
            leftPos = i;
            break;
        }
    }

    int rightMin = *min_element(heights.begin(), heights.end());
    int rightPos = n - 1;
    for (int i = n-1; i >= 0; --i) {
        if(rightMin == heights[i]){
            rightPos = i;
            break;
        }
    }
    int swaps = leftPos + (n - 1 - rightPos);
    if (leftPos > rightPos) swaps--;
    cout << swaps;
}

// https://codeforces.com/problemset/problem/96/A
#include <iostream>
using namespace std;
int main() {
    string match;
    cin >> match;
    int sequence = 1;

    for (int i = 1; i < match.length(); ++i) {
        if (match[i] == match[i-1]) {
            sequence++;
            if (sequence >= 7) {
                cout << "YES";
                return 0;
            }
        }
        else sequence = 1;
    }
    cout << "NO";
}*/

