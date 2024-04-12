#include <bits/stdc++.h>
using namespace std;
// link: https://codeforces.com/problemset/problem/1791/B
int main(){
    int n;
    string input;
    
    cin >> n;
    while(n--){
        vector <vector<int>> matrix(150, vector<int>(150, 0));
        int t, x=50, y=50;
        cin >> t >> input;

        for(auto c: input){
            if(c == 'U') ++y; // up
            else if(c == 'D') --y; // down
            else if(c == 'L') --x; // left
            else if(c == 'R') ++x; // right
            matrix[y][x]++;
        }
        cout << (matrix[51][51] ? "YES" : "NO") << endl;
    }
}
