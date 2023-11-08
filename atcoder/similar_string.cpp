#include <bits/stdc++.h>
using namespace std;
// link: https://atcoder.jp/contests/abc303/tasks/abc303_a
int main()
{
    int length, count=0;
    string input1, input2;
 
    cin >> length >> input1 >> input2;
 
    for(int i=0; i<length; ++i){
        if(input1[i] == 'l')
            input1[i] = '1';
        if(input1[i] == 'o')
            input1[i] = '0';
        if(input2[i] == 'l')
            input2[i] = '1';
        if(input2[i] == 'o')
            input2[i] = '0';
    }
    cout << (input1 == input2 ? "Yes" : "No") << endl;
}
