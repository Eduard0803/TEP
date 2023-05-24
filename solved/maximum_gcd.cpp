#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/UVA-11827/origin
int abs(int n){return n < 0 ? n*-1 : n;}
int gcd(int a, int b){return !a ? b : gcd(b%a, a);}

void solve(){
    int x, out=0;
    string str;

    getline(cin, str);
    stringstream s(str);
    vector <int> v;
    while(s >> x)
        v.push_back(x);
    for(int i=0; i<v.size(); ++i)
        for(int j=i+1; j<v.size(); ++j)
            out = max(out, gcd(v[i], v[j]));
    cout << abs(out) << endl;
}

int main()
{
    int n;
    cin >> n;
    getchar();
    while(n--)
        solve();
}
