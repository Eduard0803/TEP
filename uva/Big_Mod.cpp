#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/UVALive-5346/origin
int main()
{
    long long b, p, m;
    while(cin >> b >> p >> m){
        long long out = 1;
        while(p > 0){
            if(p % 2 == 1){
                out *= b;
                out %= m;
            }
            b *= b;p /= 2;b %= m;
        }
        cout << out << endl;
    }
}
