#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/CSES-1068/origin
int main()
{
    long long int n;
    cin >> n;
    while(n != 1){
        cout << n << " ";
        if(n % 2 == 0)
            n /= 2;
        else
            (n *=3)++;
    }
    cout << 1 << endl;
}
