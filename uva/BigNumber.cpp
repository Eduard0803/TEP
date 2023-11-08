#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/UVA-1185/origin
int out(int n){
    double count = 0;
    for(int i=2; i<=n; ++i)
        count += log10(i);
    return ++count;
}

void solution(){
    int n;
    cin >> n;
    cout << out(n) << endl;
}

int main()
{
    int occurrences;
    cin >> occurrences;

    while(occurrences--)
        solution();
}
