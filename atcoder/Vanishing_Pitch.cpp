#include <bits/stdc++.h>
// link: https://atcoder.jp/contests/abc191/tasks/abc191_a?lang=en
using namespace std;
int main(){
    int v, t, s, d;

    cin >> v >> t >> s >> d;
    cout << (v*t > d || v*s < d ? "Yes" : "No") << endl;
}
