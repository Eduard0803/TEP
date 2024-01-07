#include <bits/stdc++.h>
// link: https://codeforces.com/contest/1915/problem/B
using namespace std;
int main(){
    string input;
    int n;

    cin >> n;
    while(n--){
        vector <int> v(3, 0);
        for(int i=0; i<3; ++i){
            cin >> input;
            for(auto c : input)
                if(c >= 65)
                    v[c-65]++;
        }
        for(int i=0; i<3; ++i)
            if(v[i] == 2)
                cout << (char)(i+65) << endl;
    }
}
