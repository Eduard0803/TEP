#include <bits/stdc++.h>
// link: https://vjudge.net/problem/CodeForces-228A/origin
using namespace std;

int main()
{
    set <long long int> n;
    long long int input;

    for(int i=0; i<4; ++i){
        cin >> input;
        n.insert(input);
    }
    cout << 4-n.size() << endl;
}
