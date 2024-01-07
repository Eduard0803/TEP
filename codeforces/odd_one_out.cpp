#include <bits/stdc++.h>
// link: https://codeforces.com/contest/1915/problem/A
using namespace std;
int main(){
    vector <int> v(3, 0);
    int n, ans;

    cin >> n;
    while(n--){
        for(int i=0; i<3; ++i)
            cin >> v[i];
        sort(v.begin(), v.end());
        cout << (v[0] == v[1] ? v[2] : v[0]) << endl;
    }
}
