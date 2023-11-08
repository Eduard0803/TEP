#include <bits/stdc++.h>
using namespace std;
// link: https://vjudge.net/problem/HackerRank-c-tutorial-pointer/origin
void out(int *n1, int *n2){
    int cloud_n = *n1;
    *n1 += *n2;
    *n2 -= cloud_n;
}

int abs(int n){
    if(n > 0)
        return n;
    return n*-1;
}

int main()
{
    int input_1, input_2;

    cin >> input_1 >> input_2;

    out(&input_1, &input_2);
    cout << input_1 << endl << abs(input_2) << endl;
}
