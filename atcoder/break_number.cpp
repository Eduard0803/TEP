#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/AtCoder-abc068_b/origin
int main()
{
    int n, out;

    cin >> n;

    out = (int)log2(n);
    out = (int)pow(2, out);
    cout << out << endl;
}
