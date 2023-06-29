#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/CodeForces-1409A/origin
int main()
{
    long long n, a, b;

    cin >> n;
    while(n--){
        cin >> a >> b;
        cout << (abs(a-b)+9)/10 << endl;
    }
}
