#include <bits/stdc++.h>
// link: https://vjudge.net/problem/AtCoder-abc097_b/origin
using namespace std;

int main()
{
    int n, out=1;

    cin >> n;

    for(int i=2; i<n; i++)
        for(int k=2; pow(i, k)<=n; k++)
            out = max(out, (int)pow(i, k));
    cout << out << endl;
}
