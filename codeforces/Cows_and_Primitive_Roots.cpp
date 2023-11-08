#include <bits/stdc++.h>
// link: https://vjudge.net/problem/CodeForces-284A/origin
using namespace std;

int main()
{
    int input, count=0;

    cin >> input;

    for(int i=1; i<input; ++i)
        if(gcd(i, input-1) == 1)
            ++count;
    cout << count << endl;
}
