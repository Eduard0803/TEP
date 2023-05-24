#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/AtCoder-abc149_c/origin
bool is_prime(int n)
{
    int div=0;
    for(int i=2; i<n; ++i)
        if(n % i == 0)
            ++div;
    return div ? false : true;
}

int main()
{
    int n;

    cin >> n;
    while(!is_prime(n++));
    cout << --n << endl;
}
