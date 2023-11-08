#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/AtCoder-abc166_c/origin

int main(){
    ios_base::sync_with_stdio(false);

    int n, m, count=0, input_1, input_2;
    cin >> n >> m;

    int height[n];
    for(int i=0; i<n; ++i)
        cin >> height[i];

    vector <int> graph[n];
    for(int i=0; i<m; ++i){
        cin >> input_1 >> input_2;
        input_1--; input_2--;
        graph[input_1].push_back(input_2);
        graph[input_2].push_back(input_1);
    }

    for(int i=0; i<n; ++i){
        int b=1;
        for(int k=0; k<(int)graph[i].size(); ++k)
            if(height[i] <= height[graph[i][k]]){
                --b;
                break;
            }
        count += b;
    }
    cout << count << endl;
}
