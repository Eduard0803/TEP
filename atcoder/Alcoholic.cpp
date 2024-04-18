#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc189/tasks/abc189_b?lang=en
int main(){
    long long n, x, v, p;
    double count=0;

    cin >> n >> x;
    for(int i=0; i<n; ++i){
        cin >> v >> p;
        count += v*p;
        if(count > x*100){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
