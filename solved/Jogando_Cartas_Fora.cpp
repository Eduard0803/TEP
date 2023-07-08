#include <bits/stdc++.h>
using namespace std;
// link: https://www.beecrowd.com.br/judge/pt/problems/view/1110
int main()
{
    queue <int> data;
    int n;

    cin >> n;
    while(n != 0){

        for(int i=1; i<=n; ++i)
            data.push(i);
        cout << "Discarded cards: ";

        while(data.size() > 2){
            cout << data.front() << ", ";
            data.pop();
            data.push(data.front());
            data.pop();
        }
        cout << data.front() << endl;
        data.pop();
        cout << "Remaining card: " << data.front() << endl;
        data.pop();
        cin >> n;
    }
}
