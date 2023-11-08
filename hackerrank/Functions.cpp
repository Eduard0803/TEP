#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/HackerRank-c-tutorial-functions/origin
int main(){
    set <int> data;
    int input;
    
    for(int i=0; i<4; ++i){
        cin >> input;
        data.insert(input);
    }
    cout << *data.rbegin() << endl;
}
