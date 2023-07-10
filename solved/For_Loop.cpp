#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/HackerRank-c-tutorial-for-loop/origin
void answer(int n){
    map<int, string> data;
    data.insert(make_pair(1, "one"));
    data.insert(make_pair(2, "two"));
    data.insert(make_pair(3, "three"));
    data.insert(make_pair(4, "four"));
    data.insert(make_pair(5, "five"));
    data.insert(make_pair(6, "six"));
    data.insert(make_pair(7, "seven"));
    data.insert(make_pair(8, "eight"));
    data.insert(make_pair(9, "nine"));

    auto it = data.find(n);

    if(it != data.end())
        cout << data[n] << endl;
    else
        cout << (n % 2 == 0 ? "even" : "odd") << endl;
}

int main(){
    int s, e;
    
    cin >> s >> e;
    for(int i=s; i<= e; ++i)
        answer(i);
}
