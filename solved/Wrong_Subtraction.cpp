#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/CodeForces-977A/origin
int main()
{
    int n, d;

    cin >> n >> d;

    while(d--)
        n % 10 == 0 ? n /= 10 : --n;
    cout << n << endl;
}
