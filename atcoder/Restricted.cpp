#include <bits/stdc++.h>
// link: https://vjudge.net/problem/AtCoder-abc063_a/origin
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    n1 += n2;
    n1 < 10 ? cout << n1 << endl : cout << "error" << endl;
}
