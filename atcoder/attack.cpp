#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc302/tasks/abc302_a
int main()
{
    long long a, b;
    
    cin >> a >> b;
    cout << (a%b == 0 ? a/b : a/b+1) << endl;
}
