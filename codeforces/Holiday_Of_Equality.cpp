#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/CodeForces-758A/origin
int main(){
    int n, count=0, value=0;
    cin >> n;
    int v[n];
    for(int i=0; i<n; ++i){
        cin >> v[i];
        if(v[i] > value)
            value = v[i];
    }
    for(int i=0; i<n; ++i)
        count += v[i]-value;
    cout << abs(count) << endl;
}
