#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc189/tasks/abc189_a?lang=en
int main(){
    char a, b, c;
    cin >> a >> b >> c;
    cout << (a == b && b == c ? "Won" : "Lost") << endl;
}
