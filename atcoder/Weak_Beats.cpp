#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc323/tasks/abc323_a
bool solve(string s){
  for(int i=1; i<16; i+=2)
    if(s[i] == '1')
      return false;
  return true;
}

int main(){
  string input;
  
  cin >> input;
  cout << (solve(input) ? "Yes" : "No") << endl;
}
