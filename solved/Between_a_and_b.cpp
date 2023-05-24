#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/AtCoder-abc048_b/origin
int main()
{
    unsigned long long int a, b, x, count;

    cin >> a >> b >> x;
    count = b/x;
    count -= !(a%x) ? a/x-1 : a/x;
    cout << count << endl;
}
