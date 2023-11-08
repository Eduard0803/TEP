#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/AtCoder-abc057_a/origin
int main(){
    int a, b;

    cin >> a >> b;
    cout << (a+b >= 24 ? a+b-24 : a+b) << endl;
}
