#include <bits/stdc++.h>
// link: https://vjudge.net/problem/UVA-11185/origin
using namespace std;

void solution(long long int n)
{
    long long int out=0, mod=0, pos=1;

    while(n){
        mod = n % 3;
        n /= 3;
        out += mod*pos;
        pos *= 10;
    }
    cout << out << endl;
}

int main()
{
    long long int n;

    while(cin >> n){
        if(n < 0)
            return 0;
        solution(n);
    }
}
