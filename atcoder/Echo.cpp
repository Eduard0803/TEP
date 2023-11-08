#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/AtCoder-abc145_b/origin
bool answer(auto it, auto it_1, int n){
    for(int i=0; i<n; ++i, ++it, ++it_1)
        if(*it != *it_1)
            return false;
    return true;
}

int main(){
    int n;
    string input;
    cin >>n >> input;
    cout << (n%2 == 0 && answer(input.begin(), input.begin()+n/2, n/2) ? "Yes" : "No") << endl;
}
