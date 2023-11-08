#include <bits/stdc++.h>
using namespace std;
// link: https://codeforces.com/group/JDDLXp8GNX/contest/411904/problem/A
int main()
{
    int n, input;
    set <int> data;

    cin >> n;
    while(n--){
        cin >> input;
        data.insert(input);
    }
    cout << data.size() << endl;
}
