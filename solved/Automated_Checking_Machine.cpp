#include <bits/stdc++.h>
// link: https://vjudge.net/problem/UVA-12854/origin
using namespace std;

int main()
{
    bool a, b, c, d, e, A, B, C, D, E;

    while(cin >> a >> b >> c >> d >> e){
        cin >> A >> B >> C >> D >> E;
        (a^A)&(b^B)&(c^C)&(d^D)&(e^E) ? cout << "Y\n" : cout << "N\n";
    }
}
