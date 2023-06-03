#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc304/tasks/abc304_a
int main()
{
    list <pair<long long, string>> data;
    string name;
    int age, n;
    long long less_age = numeric_limits<long long>::max();
    auto it = data.begin();

    cin >> n;
    while(n--){
        cin >> name >> age;
        data.insert(data.end(), make_pair(age, name));
        if(age < less_age)
            less_age = age;
    }
    for(auto i = data.begin(); i != data.end(); ++i)
        if(i->first == less_age)
            it = i;

    for(auto i = it; i != data.end(); ++i)
        cout << i->second << endl;
    for(auto i = data.begin(); i != it; ++i)
        cout << i->second << endl;
}
