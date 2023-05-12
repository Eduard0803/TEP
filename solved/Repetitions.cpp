#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/CSES-1069/origin
int main()
{
    string input;
    int high=0, count=0;

    cin >> input;

    for(int i=1; i<input.length(); ++i)
    {
        if(input[i] == input[i-1])
            ++count;
        else{
            if(count > high)
                high = count;
            count = 0;
        }
    }
    count > high ? cout << ++count << endl : cout << ++high << endl;
}
