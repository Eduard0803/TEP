#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/AtCoder-abc186_b/origin
int main(){
    int h, w, less=101, input, ans=0;

    cin >> h >> w;

    vector <int> v;

    for(int i=0; i<h*w; ++i){
        cin >> input;
        v.push_back(input);
        if(less > input)
            less = input;
    }
    for(int i=0; i<h*w; ++i){
        ans += v[i] - less;
    }
    cout << ans << endl;
}
