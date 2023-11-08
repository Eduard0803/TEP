#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/AtCoder-abc146_b/origin
int main()
{
    int n;
    string input;
    cin >> n >> input;
    for(int i=0; i<input.length(); ++i)
        cout << (char)(input[i]+n > 90 ? input[i]+n-26 : input[i]+n);
    cout << endl;
}
