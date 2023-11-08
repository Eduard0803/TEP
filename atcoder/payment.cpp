#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/AtCoder-abc173_a/origin
int main()
{
    int n;
    cin >> n;
    cout << (n%1000==0 ? n%1000 : 1000-n%1000) << endl;
}
