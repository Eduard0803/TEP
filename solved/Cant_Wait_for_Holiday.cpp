#include <bits/stdc++.h>
using namespace std;

void init(string key){
    map<string, int> data;
    data.insert(make_pair("SUN", 7));
    data.insert(make_pair("MON", 6));
    data.insert(make_pair("TUE", 5));
    data.insert(make_pair("WED", 4));
    data.insert(make_pair("THU", 3));
    data.insert(make_pair("FRI", 2));
    data.insert(make_pair("SAT", 1));
    
    auto it = data.find(key);
    cout << it->second << endl;
}

int main(){
    string input;
    cin >> input;
    init(input);
}
