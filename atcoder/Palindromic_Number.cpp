#include <bits/stdc++.h>
// link: https://vjudge.net/problem/AtCoder-abc070_a/origin
using namespace std;

int main()
{
    string n;
    char answer = 1;
    
    cin >> n;
    for(int i=0, k=n.length()-1; i<k; ++i,--k)
        if(n[i] != n[k])
            answer = 0;
    answer ? cout << "Yes" << endl : cout << "No" << endl;
}