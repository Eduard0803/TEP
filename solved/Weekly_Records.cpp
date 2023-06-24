#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc307/tasks/abc307_a
int main()
{
    int n, input, count=0;
    cin >> n;
    n *= 7;
    while(n--){
        cin >> input;
        count += input;
        if(n % 7 == 0){
            cout << count << endl;
            count = 0;
        }
    }
}
