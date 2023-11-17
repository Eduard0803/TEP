#include <bits/stdc++.h>
using namespace std;
// link: https://codeforces.com/contest/1899/problem/A
int main(){
    int n, input;

    cin >> n;
    while(n--){
        cin >> input;
        cout << (input % 3 ? "First" : "Second") << endl;
    }
}
