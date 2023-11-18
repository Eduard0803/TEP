#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc329/tasks/abc329_a
int main(){
    string input;

    cin >> input;
    for(int i=0; i<(int)input.size()-1; ++i)    
        cout << input[i] << " ";
    cout << input[(int)input.size()-1] << endl;
}
