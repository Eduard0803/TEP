#include <bits/stdc++.h>
using namespace std;
// link: https://codeforces.com/group/JDDLXp8GNX/contest/421464/problem/A
int main()
{
    set <pair <int, string>> data;
    int age, n;
    string type;
    
    cin >> n;
    while(n--){
        cin >> age >> type;
        data.insert(make_pair(age, type));
    }
    cout << data.size() << endl;
}
