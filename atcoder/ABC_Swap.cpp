#include <bits/stdc++.h>
#define swap(a, b) {char t=a;a=b;b=t;}
using namespace std;
// link: https://vjudge.net/problem/AtCoder-abc161_a/origin
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    swap(a, b);
    swap(a, c);
    cout << a << " " << b << " " << c << endl;
}
