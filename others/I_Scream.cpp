#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc194/tasks/abc194_a?lang=en
int main(){
    int a, b, ans=4;

    cin >> a >> b;

    if(a+b >= 15 && b>= 8)
        ans=1;
    else if(a+b >= 10 && b>= 3)
        ans=2;
    else if(a+b >= 3)
        ans=3;
    cout << ans << endl;
}
