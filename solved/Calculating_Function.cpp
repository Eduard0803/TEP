#include <bits/stdc++.h>
// link: https://vjudge.net/problem/CodeForces-486A/origin
using namespace std;

int main()
{
    long long int n;

    cin >> n;

    if(n % 2 == 0)
        cout << n/2 << endl;
    else
        cout << (n+1)/-2 << endl;
}
