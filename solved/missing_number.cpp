#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/CSES-1083/origin
int main()
{
    set<int> data, bank;
    int n, input;

    cin >> n;
    for(int i=1; i<n; ++i){
        cin >> input;
        data.insert(input);
        bank.insert(i);
    }
    bank.insert(n);
    for(;*(data.begin()) == *(bank.begin());){
        data.erase(*(data.begin()));
        bank.erase(*(bank.begin()));
    }
    cout << *(bank.begin()) << endl;
}
