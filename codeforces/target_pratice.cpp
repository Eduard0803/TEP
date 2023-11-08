#include <bits/stdc++.h>
using namespace std;
// link: https://codeforces.com/contest/1873/problem/C
int main(){
    vector <int> v[10] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, {1, 2, 2, 2, 2, 2, 2, 2, 2, 1}, {1, 2, 3, 3, 3, 3, 3, 3, 2, 1}, {1, 2, 3, 4, 4, 4, 4, 3, 2, 1}, {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                            {1, 2, 3, 4, 5, 5, 4, 3, 2, 1}, {1, 2, 3, 4, 4, 4, 4, 3, 2, 1}, {1, 2, 3, 3, 3, 3, 3, 3, 2, 1}, {1, 2, 2, 2, 2, 2, 2, 2, 2, 1}, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

    string input;
    int n;

    cin >> n;
    for(int i=0; i<n; ++i){
        int count = 0;
        for(int k=0; k<10; ++k){
            cin >> input;
            for(int j=0; j<10; ++j)
                if(input[j] == 'X')
                    count += v[k][j];
        }
        cout << count << endl;
    }
}
