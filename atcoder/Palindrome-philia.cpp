#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/AtCoder-abc147_b/origin
int main()
{
    string input;
    cin >> input;
    int it=input.length()-1, count=0;
    for(int i=0; i<it; ++i, --it)
        if(input[i] != input[it])
            ++count;
    cout << count << endl;
}
