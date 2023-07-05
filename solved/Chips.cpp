#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/CodeForces-92A/origin
int main(){
    int n, m;
    cin >> n >> m;
    m %= (n*(n+1)/2);

    for(int i=0; i<=n; ++i){
        if(m < i) break;
        m -= i;
    }
    cout << m << endl;
}
