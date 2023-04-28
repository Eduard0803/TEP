#include <bits/stdc++.h>
// link: https://vjudge.net/problem/AtCoder-abc064_a/origin
using namespace std;

int main()
{
    int r, g, b, n;
    cin >> r >> g >> b;
    n = 100*r + 10*g + b;
    
    n % 4 == 0 ? cout << "YES" << endl : cout << "NO" << endl;
}