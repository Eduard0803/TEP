#include <bits/stdc++.h>
using namespace std;
// link: https://codeforces.com/contest/1878/problem/A
bool solve(int n, int k){
    vector <int> data(n);
    int input;

    for(int i=0; i<n; ++i){
        cin >> input;
        data.emplace_back(input);
    }
    auto it = find(data.begin(), data.end(), k);
    return it == data.end() ? false : true;
}

int main(){
    ios_base::sync_with_stdio(false);

    int t, n, k;

    cin >> t;
    for(int i=0; i<t; ++i){
        cin >> n >> k;
        cout << (solve(n, k) ? "YES" : "NO") << endl;
    }
}
