#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc322/tasks/abc322_a
int solve(string s){
    auto idx = s.find("ABC");
    return idx == string::npos ? -1 : (int)idx+1;
}

int main(){
    int n;
    string input;

    cin >> n >> input;

    cout << solve(input) << endl;
}
