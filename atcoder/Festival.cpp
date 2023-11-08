#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc322/tasks/abc322_c
int main(){
    int n, m, input;

    cin >> n >> m;
    vector <int> data(m, 0);

    for(int i=0; i<m; ++i){
        cin >> input;
        data.emplace_back(input);
    }

    for(int i=1; i<=n; ++i){
        auto it = lower_bound(data.begin(), data.end(), i);
        cout << (*it-i) << endl;
    }
}
