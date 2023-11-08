#include <bits/stdc++.h>
using namespace std;
// link: https://codeforces.com/group/JDDLXp8GNX/contest/460398/problem/D 
long long fatorial(int n){
    if(n == 0 || n == 1)
        return 1;
    return n*fatorial(n-1);
}
 
int main()
{
    int n;
    cin >> n;
    cout << fatorial(n-1) << endl;
}