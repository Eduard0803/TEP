#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/AtCoder-abc179_c/origin
int main()
{
    int n, count=0;

    cin >> n;
    for(int i=1; i<n; ++i)
        for(int k=1; k<n; ++k)
            if(i*k < n)
                ++count;
            else
                break;
    cout << count << endl;
}
