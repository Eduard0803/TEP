#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc329/tasks/abc329_b
int main(){
    int n, input, high=0, ans=0;
    set <int> data;

    cin >> n;
    while(n--){
        cin >> input;
        data.insert(input);
    }
    auto it = prev(data.end(), 2);
    cout << *it << endl;
}