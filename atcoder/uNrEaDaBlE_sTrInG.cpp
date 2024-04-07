#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc192/tasks/abc192_b?lang=en
bool solve(string s){
    bool min = true;
    for(int i=0; i<(int) s.size(); ++i){
        if(min && !islower(s[i]))
            return false;
        else if(!min && islower(s[i]))
            return false;
        min = !min;
    }
    return true;
}

int main(){
    string input;

    cin >> input;
    cout << (solve(input) ? "Yes" : "No") << endl;
}
