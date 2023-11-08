#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/AtCoder-abc103_a/origin
int main(){
    int n[3];
    for(int i=0; i<3; ++i)
        cin >> n[i];
    sort(n, n+3);
    cout << abs(n[0]-n[1])+abs(n[1]-n[2]) << endl;
}
