#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/AtCoder-abc149_b/origin
int main(){
    long long a, b, k;
    cin >> a >> b >> k;

    if(k > a){
        k -= a;
        a = 0;
        b -= k;
    }
    else
        a -=k;
    if(b < 0)
        b = 0;

    cout << a << " " << b << endl;
}
