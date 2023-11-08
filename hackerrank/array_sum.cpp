#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/HackerRank-simple-array-sum/origin
int main()
{
    int n, input, sum=0;
    cin >> n;

    while(n--){
        cin >> input;
        sum += input;
    }
    cout << sum << endl;
}
