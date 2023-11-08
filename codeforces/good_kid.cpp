#include <bits/stdc++.h>
using namespace std;
// link: https://codeforces.com/contest/1873/problem/B
int main(){
    int c;

    cin >> c;
    for(int i=0; i<c; ++i){
        int n, input, answer=1;

        cin >> n;
        vector <int> v;
        for(int k=0; k<n; ++k){
            cin >> input;
            v.emplace_back(input);
        }
        sort(v.begin(), v.end());
        v[0]++;
        for(int k : v)
            answer *= k;
        cout << answer << endl;
        v.clear();
    }
}
