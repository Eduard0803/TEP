#include <bits/stdc++.h>
using namespace std;
// link: https://codeforces.com/contest/1873/problem/A
int main(){
    string s, t = "abc";
    int n;

    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> s;
        int count=0;
        for(int i=0; i<3; ++i)
            if(s[i] != t[i])
                ++count;
        cout << (count > 2 ? "NO" : "YES") << endl;
    }
}
