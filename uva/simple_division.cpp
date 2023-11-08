#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/UVA-10407/origin
int abs(int n){return n < 0 ? n*-1 : n;}
int gcd(int a, int b){return a == 0 ? b : gcd(b%a, a);}

int main()
{
    int n, input;
    
    while(cin >> n, n != 0){
        int out=0;
        while(cin >> input, input != 0)
            out = gcd(out, input-n);
        cout << abs(out) << endl;
    }
}
