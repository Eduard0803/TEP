#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc190/tasks/abc190_b?lang=en
int main(){
    unsigned long long n, s, d, x, y, ans=0;

    cin >> n >> s >> d;
    while(n--){
        cin >> x >> y;
        ans = x<s && y>d ? 1 : ans;
    }
    cout << (ans ? "Yes" : "No") << endl;
}
