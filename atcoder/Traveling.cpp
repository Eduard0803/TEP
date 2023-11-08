#include <bits/stdc++.h>
// link: https://vjudge.net/problem/AtCoder-abc064_b/origin
using namespace std;

int main()
{
    int n, v[100];
    cin >> n;

    for(int i=0; i<n; ++i)
        cin >> v[i];

    sort(v, v+n);
    cout << v[n-1]-v[0] << endl;
}
