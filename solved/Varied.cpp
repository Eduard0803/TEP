#include <bits/stdc++.h>
// link: https://vjudge.net/problem/AtCoder-abc063_b/origin
using namespace std;

int main()
{
    string input;
    set <char> data;
    cin >> input;

    for(int i=0; i<input.length(); ++i)
        data.insert(input[i]);
    data.size() == input.length() ? cout << "yes" << endl : cout << "no" << endl;
}
