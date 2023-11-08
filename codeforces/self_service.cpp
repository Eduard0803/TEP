#include <bits/stdc++.h>
using namespace std;
// link: https://codeforces.com/group/JDDLXp8GNX/contest/460398/problem/E 
int main()
{
    int g, d; 
    double r, valorD;
 
    cin >> g >> d >> r;
 
    valorD = r/g*1000;
    
    r = 100*valorD/(100-d);
 
    cout << setprecision(10) << r << endl;
}