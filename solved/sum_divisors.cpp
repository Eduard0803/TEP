#include <bits/stdc++.h>
// link: https://vjudge.net/problem/AtCoder-abc172_d/origin
using namespace std;
const int N=1e7+3;
long long p[N], n, ans=1;
int main()
{
    for(int i=1; i<N; ++i)
        for(int j=i; j<N; j+=i)
            ++p[j];
    cin >> n;
    for(int i=2; i<=n; ++i)
        ans += i*p[i];
    cout << ans << endl;
}
