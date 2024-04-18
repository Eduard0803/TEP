#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc184/tasks/abc184_b?lang=en
int main(){
    int n, x;
    string s;

    cin >> n >> x >> s;
    for(int i=0; i<n; ++i)
        s[i] == 'o' ? ++x : x > 0 ? --x : 0;
    cout << x << endl;
}
