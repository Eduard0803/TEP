#include <bits/stdc++.h>
// link: https://vjudge.net/problem/AtCoder-abc043_b/origin
using namespace std;

int main()
{
    string input, out;
    cin >> input;

    for(int i=0; i<input.size(); i++)
        if(input[i] == '0' || input[i] == '1')
            out.push_back(input[i]);
        else if(out.size() != 0 && input[i] == 'B')
            out.pop_back();
    cout << out << endl;
}
