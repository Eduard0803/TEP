#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc190/tasks/abc190_a?lang=en
int main(){
    int a, b, c;

    cin >> a >> b >> c;
    if(a > b)
        cout << "Takahashi" << endl;
    else if(b > a)
        cout << "Aoki" << endl;
    else
        cout << (c ? "Takahashi" : "Aoki") << endl;
}
