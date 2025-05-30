/*
// G
#include<iostream>
using namespace std;
int main(){
    long long num, a = 0, b = 1, c;
    cin >> num;
    if (num == 1)
        cout << a;
    else if (num == 2)
        cout << a << " " << b;
    else{
        cout << a << " " << b << " ";
        for(int i = 2 ; i < num; ++i){
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
    }
}
// F
#include<iostream>
#include <string>
using namespace std;
int main(){
    long long a, b;
    string x, y;
    cin >> a >> b;
    cin >> x;
    cin >> y;
    bool flag = true;
    for(int i = 0; i < x.length() || i < y.length(); i++){
        if (x[i] == y[i])
            continue;
        else{
            if ((int)x[i] > (int)y[i]){
                cout << y << endl;
                flag = false;
            }
            else{
                cout << x << endl;
                flag = false;
            }
            break;
        }
    }
    if (flag)
        cout << x << endl;
}
// E
#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long prices[n];
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    long long min_price = prices[0], max_price = prices[0];
    for (int i = 1; i < n; ++i) {
        if (prices[i] < min_price)
            min_price = prices[i];
        if (prices[i] > max_price)
            max_price = prices[i];
    }
    cout << max_price << " " << min_price << endl;
}
// N
#include <iostream>
#include <string>
using namespace std;
int main() {
    string word, new_word;
    long long n;
    cin >> n;
    cin.ignore();
    getline(cin, word);
    for(int i =0; i < n ; ++i){
       if(word[i] == word[i+1])
           continue;
       else
           new_word += word[i];
    }
    cout << new_word;
}
// A
#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long tile[n][n];
    for (long long i = 0; i < n; ++i) {
        tile[i][0] = tile[0][i] = 1;
    }
    for (long long i = 1; i < n; ++i) {
        for (long long j = 1; j < n; ++j)
            tile[i][j] = tile[i][j - 1] + tile[i - 1][j];
    }
    for (long long i = 0; i < n; ++i) {
        for (long long j = 0; j < n; ++j) {
            cout << tile[i][j] << " ";
        }
        cout << endl;
    }
}
// B
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long p[n];
    for (long long i = 0; i < n; ++i) {
        cin >> p[i];
    }
    long long max = abs(p[0] - p[1]), min = abs(p[0] - p[1]);
    for (long long j = 1; j < n - 1; ++j) {
        long long diff = abs(p[j] - p[j+1]);
        if (diff > max)
            max = diff;
        if (diff < min)
            min = diff;
    }
    cout << max << " " << min;
}
// C
#include <iostream>
using namespace std;
int main() {
    long long n;
    bool flag = true;
    cin >> n;
    long long p[n];
    for (long long i = 0; i < n; ++i) {
        cin >> p[i];
    }
    if (p[0] > p[1] || p[0] == p[1]) {
        for (int j = 1; j < n-1; ++j) {
            if (p[j] > p[j + 1] || p[j] == p[j + 1]){
                continue;
            }
            flag = false;
            break;
        }
    }
    if (p[0] < p[1] || p[0] == p[1]) {
        for (int j = 1; j < n-1; ++j) {
            if (p[j] < p[j + 1] || p[j] == p[j + 1]){
                continue;
            }
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}
// I
#include<iostream>
#include<string>
using namespace std;
int main(){
    int size;
    cin>>size;
    cin.ignore();
    string str;
    getline(cin,str);
    bool flag = true;
    for (int i =0; i < str.length(); ++i){
        if(str[i] != str[size-1]){
            flag = false;
            break;
        }
        -- size;
    }
    if (flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
// J
#include<iostream>
#include<string>
using namespace std;
int main(){
    int size;
    cin>>size;
    cin.ignore();
    string jamal, beshoy;
    getline(cin,jamal);
    getline(cin,beshoy);
    bool flag=true;
    for (int j = 0 ; j < jamal.length()-1;++j) {
        if (beshoy[0] == jamal[j] && beshoy[1] == jamal[j+1] && beshoy[2] == jamal[j+2]){
            flag = true;
            break;
       }
        else
            flag = false;
   }
    if (flag)
        cout<<"YES";
    else
        cout<<"NO";
}
// H
#include<iostream>
using namespace std;
int main() {
    long long n, max = 0, min = 0;
    cin >> n;
    long long p[n];
    for (long long i = 0; i < n; ++i) {
        cin >> p[i];
    }
    for(long long j = 1; j < n-1; ++j) {
        if (p[j] > p[j-1] && p[j] > p[j+1])
            ++max;
        if (p[j] < p[j-1] && p[j] < p[j+1])
            ++min;
    }
    cout << max << " " << min;
}
// P
#include<iostream>
#include<string>
using namespace std;
int main(){
    string num;
    getline(cin,num);
    int len = num.length();
    for (int i=len-1;i>=0;i--){
        if (num[len-1]=='0')
            cout<<num[i-1];
        else
            cout<<num[i];
    }
}
// orthogonality
#include<iostream>
using namespace std;
long long sumofproduct(int arr[],int arr2[],int index,int num,long long  sum){
    if(index==num)
        return sum;
    else{
        long long product=arr[index]*arr2[index];
        return sumofproduct(arr,arr2,index+1,num,sum+product);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n], arr2[n] ;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int j=0;j<n;j++)
        cin>>arr2[j];
    cout<<(sumofproduct(arr,arr2,0,n,0) == 0 ? "Yes":"No")<<endl;
}*/

// https://vjudge.net/problem/SPOJ-QUEUEEZ
/*#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    queue<int> Q;

    while (n--) {
        int type, x;
        cin >> type;

        if (type == 1) {
            cin >> x;
            Q.emplace(x);
        } else if (type == 2 && !Q.empty()) {
            Q.pop();
        } else if (type == 3) {
            if (!Q.empty()) {
                cout << Q.front() << endl;
            } else {
                cout << "Empty!" << endl;
            }
        }
    }

    return 0;
}


#include <cstdio>
#include <queue>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    queue<int> Q;
    while (n--) {
        int type, x;
        scanf("%d", &type);
        if (type == 1) {
            scanf("%d", &x);
            Q.emplace(x);
        } else if (type == 2 && !Q.empty())
            Q.pop();
        else if (type == 3) {
            if (!Q.empty())
                printf("%d\n", Q.front());
            else
                printf("Empty!\n");
        }
    }
}

// https://vjudge.net/contest/657513#problem/A
#include <iostream>
#include <queue>
using namespace std;
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T, n, k;
    queue<int> q;
    cin >> T;
    while (T--){
        cin >> n;
        if(n == 1){
            cin >> k;
            q.push(k);
        }
        else if(!q.empty() && n == 2) q.pop();
        else if(n == 3){
            if(!q.empty()) cout << q.front() << '\n';
            else cout << "Empty!" << '\n';
        }
    }
}

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

// https://vjudge.net/contest/657513#problem/C
#include <iostream>
#include <deque>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    deque<int> dq(n);
    int arr[q];
    for(int i = 0; i < n; ++i) cin >> dq[i];
    for(int i = 0; i < q; ++i) cin >> arr[i];
    for(int i = 0; i < q; ++i) {
        for(int j = 0; j < n; ++j) {
            if(arr[i] == dq[j]) {
                cout << j + 1 << " ";
                dq.push_front(dq[j]);
                dq.erase(dq.begin() + j + 1);
                break;
            }
        }
    }
}

// https://vjudge.net/contest/657513#problem/D   // 1000
#include <iostream>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while (t--){
        int balance = 0, ans = 0;
         cin >> n;
         string s;
         cin >> s;
         // )))((((())
         for(int i = 0; i < n; ++i){
             if (s[i] == '(') balance++;
             else balance--;
             if (balance < 0){
                 ans++;
                 balance++;
             }
         }
         cout << ans << '\n';
    }
}

// https://vjudge.net/contest/657513#problem/E   // 1400
#include <iostream>
#include <deque>
using namespace std;
int main() {
    string s;
    cin >> s;
    int matchingpairs = 0;
    deque<char> dq;
    for(char x : s){
        if(x == '(') dq.push_back(x);
        else if(x == ')' && dq.size() != 0){
            dq.pop_back();
            matchingpairs++;
        }
    }
    cout << matchingpairs * 2;
}

// https://vjudge.net/contest/657513#problem/F   // 1000
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        if (s[0] == ')' || s[n-1] == '(') {
            cout << "NO" << endl;
            continue;
        }
        cout << (n % 2 == 0 ? "YES" : "NO") << endl;
    }
}

// https://vjudge.net/contest/657513#problem/T    //800
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, sereja = 0, dima = 0;
    bool serejaturn = true;
    cin >> n;
    int left = 0, right = n - 1;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    while (left <= right){
        if (v[left] > v[right]){
            if(serejaturn) sereja += v[left];
            else dima += v[left];
            ++left;
        }
        else{
            if(serejaturn) sereja += v[right];
            else dima += v[right];
            --right;
        }
        serejaturn =!serejaturn;
    }
    cout << sereja << " " << dima;
}

// https://vjudge.net/contest/657513#problem/G  // 800
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int round_bracket_pairs = 0, square_bracket_pairs = 0, open_round = 0, open_square = 0;
        for (char c : s) {
            if (c == '(') open_round++;
            else if (c == ')') {
                if (open_round > 0) {
                    round_bracket_pairs++;
                    open_round--;
                }
            }
            else if (c == '[') open_square++;
            else if (c == ']') {
                if (open_square > 0) {
                    square_bracket_pairs++;
                    open_square--;
                }
            }
        }
        cout << (round_bracket_pairs + square_bracket_pairs) << endl;
    }
}

// https://vjudge.net/contest/657513#problem/R
// askkkkkkkk
#include <iostream>
#include <deque>
#define intt long long
using namespace std;
int main() {
    intt n;
    cin >> n;
    deque<pair<intt, intt>> dq;
    intt i, x, c;
    while(n--) {
        intt sum = 0;
        cin >> i;
        if (i == 1) {
            cin >> x >> c;
            if (!dq.empty() && dq.back().first == x)dq.back().second += c;
            else dq.push_back({x, c});
        }
        else if (i == 2) {
            cin >> c;
            while (c > 0) {
                if (dq.front().second <= c) {
                    sum += dq.front().first * dq.front().second;
                    c -= dq.front().second;
                    dq.pop_front();
                }
                else {
                    sum += dq.front().first * c;
                    dq.front().second -= c;
                    c = 0;
                }
            }
            cout << sum << '\n';
        }
    }
}

// https://vjudge.net/contest/657513#problem/H
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    stack<int> s;
    stack<int> maxStack;
    vector<int> results;
    while (n--) {
        int type;
        cin >> type;
        if (type == 1) {
            int x;
            cin >> x;
            s.push(x);
            if (maxStack.empty() || x >= maxStack.top()) maxStack.push(x);
        }
        else if (type == 2) {
            if (!s.empty()) {
                if (s.top() == maxStack.top()) maxStack.pop();
                s.pop();
            }
        }
        else if (type == 3) if (!maxStack.empty()) results.push_back(maxStack.top());
    }
    for (int result : results) cout << result << endl;
}

// https://vjudge.net/contest/657513#problem/I
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    vector<int> num;
    queue<int> q;
    int x = 0;
    while (true) {
        cin >> x;
        if (x == 0) break;
        num.push_back(x);
    }
    for (int i = 0; i < num.size(); i++) {
        int n = num[i];
        vector<int> discarded_cards;
        for (int j = 1; j <= n; j++) q.push(j);
        while (q.size() > 1) {
            discarded_cards.push_back(q.front());
            q.pop();
            q.push(q.front());
            q.pop();
        }
        int last_remaining_card = q.front();
        cout << "Discarded cards:";
        if (!discarded_cards.empty()) for (size_t k = 0; k < discarded_cards.size(); k++) cout << (k == 0 ? " " : ", ") << discarded_cards[k];
        cout << endl;
        cout << "Remaining card: " << last_remaining_card << endl;
        while (!q.empty()) q.pop();
    }
}

// https://vjudge.net/contest/657513#problem/O
#include <iostream>
#include <deque>
using namespace std;
int main() {
    string S, T;
    cin >> S >> T;
    deque<char> dq(S.begin(), S.end());
    for (int i = 0; i < S.length(); i++) {
        if (deque<char>(dq.begin(), dq.end()) == deque<char>(T.begin(), T.end())) {
            cout << "Yes" << endl;
            return 0;
        }
        dq.push_back(dq.front());
        dq.pop_front();
    }
    cout << "No" << endl;
}

// https://vjudge.net/contest/657513#problem/Q
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main() {
    string s, result;
    stack<char> snew;
    cin >> s;
    for (char c : s) {
        if (c == '<' && !snew.empty()) snew.pop();
        else if (c != '<') snew.push(c);
    }

    while (!snew.empty()) {
        result += snew.top();
        snew.pop();
    }
    reverse(result.begin(), result.end());
    cout << result << endl;
}*/
