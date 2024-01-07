#include <bits/stdc++.h>
using namespace std;
// link: https://codeforces.com/contest/1915/problem/C
bool is_true(long long n){
    long long m = (long long)sqrt(n);
    return m*m==n;
}

int main(){
    long long n, b, input;

    cin >> n;
    while(n--){
        long long sum = 0;
        cin >> b;
        while(b--){
            cin >> input;
            sum += input;
        }
        cout << (is_true(sum) ? "YES" : "NO") << endl;
    }
}
