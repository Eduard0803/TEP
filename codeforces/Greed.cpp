#include <bits/stdc++.h>
using namespace std;
// link: https://codeforces.com/problemset/problem/892/A
int main(){
    long long n, v=0, _v, _c;
    vector <long long> c;

    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> _v;
        v += _v;
    }
    for(int i=0; i<n; ++i){
        cin >> _c;
        c.emplace_back(_c);
    }
    sort(c.begin(), c.end());

    cout << (c[n-1]+c[n-2] >= v ? "YES" : "NO") << endl;
}
