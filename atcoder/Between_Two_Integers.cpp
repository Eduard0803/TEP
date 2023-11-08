#include <bits/stdc++.h>
// link: https://vjudge.net/problem/AtCoder-abc061_a/origin
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if(c >= a && c <= b)
        cout << "Yes";
    else
        cout << "No";
}
