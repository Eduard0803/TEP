#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/CodeForces-1475A/origin
int main(){
    long long n, input;
    
    cin >> n;
    while(n--){
        cin >> input;
        while(input % 2 == 0)
            input /= 2;
        cout << (input==1 ? "NO\n" : "YES\n");
    }
}
