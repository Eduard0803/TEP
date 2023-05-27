#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/AtCoder-abc211_a/origin
int main()
{
    int a, b;
    double c;
    
    cin >> a >> b;

    c = 1.0*(a-b)/3;
    c += b;
    cout << c << endl;
}
