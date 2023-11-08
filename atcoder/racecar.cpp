#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc307/tasks/abc307_b
bool isPalindromic(string s){
    string i = s;
    reverse(i.begin(), i.end());
    return s == i;
}

int n;
string input[102];
bool normal(){
    for(int i=0; i<n-1; ++i)
        for(int j=i+1; j<n; ++j)
            if(isPalindromic(input[i] + input[j]))
                return true;
    return false;
}

bool contrario(){
    for(int i=n-1; i>0; --i)
        for(int j=i-1; j>=0; --j)
            if(isPalindromic(input[i] + input[j]))
                return true;
    return false;
}

int main()
{
    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> input[i];
    normal() || contrario() ? cout << "Yes\n" : cout << "No\n";
    return 0;
}
