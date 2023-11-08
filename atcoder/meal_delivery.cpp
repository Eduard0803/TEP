#include <iostream>
using namespace std;
// link: https://vjudge.net/problem/AtCoder-abc071_a/origin
int main()
{
    int x, a, b;

    cin >> x >> a >> b;

    int dif_a = abs(x-a);
    int dif_b = abs(x-b);

    if(dif_a < dif_b)
        cout << "A" << endl;
    else
        cout << "B" << endl;
}
