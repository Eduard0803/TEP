#include <bits/stdc++.h>
using namespace std;
// link: https://www.beecrowd.com.br/judge/pt/problems/view/1244
int main(){
    vector<pair<int, string>> data;
    string input, token;
    int n;

    cin >> n;

    for(int i=0; i<=n; i++){
        getline(cin, input);
        istringstream iss(input);
        while(iss >> token)
            data.emplace_back(token.size(), token);

        stable_sort(data.begin(), data.end(), [](const pair<int, string>& a, const pair<int, string>& b){
            return a.first > b.first;
        });
        
        for(int k=0; k<(int)data.size(); ++k)
            cout << data[k].second << (k<(int)data.size()-1 ? " " : "\n");

        data.clear();
    }
}
