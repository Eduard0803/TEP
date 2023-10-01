#include <bits/stdc++.h>
using namespace std;
// link: https://codeforces.com/contest/1873/problem/D
int main(){
    int t, n, k;

    cin >> t;
    for(int j=0; j<t; ++j){
        string s;
        int count=0;
        cin >> n >> k;
        cin >> s;
        for(int i=0; i<n; ++i)
            if(s[i] == 'B'){
                ++count;
                i += k-1;
            }
        cout << count << endl;
    }
}
