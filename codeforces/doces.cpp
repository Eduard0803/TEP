#include <bits/stdc++.h>
using namespace std;
// link: https://codeforces.com/group/JDDLXp8GNX/contest/460398/problem/A 
int main()
{
    int n, m, input, answer;
 
    cin >> n >> m >> answer;
 
    for(int i=1; i<n; ++i){
        cin >> input;
        if(input % m < answer % m)
            answer = input;
        else if(input % m == answer % m)
            if(input > answer)
                answer = input;
    }
    cout << answer << endl;
}