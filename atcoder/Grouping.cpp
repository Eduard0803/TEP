#include <bits/stdc++.h>
// link: https://vjudge.net/problem/AtCoder-abc062_a/origin
using namespace std;
#define YES {cout << "Yes" << endl;}
#define NO {cout << "No" << endl;}

int main()
{
    int c1[] = {1, 3, 5, 7, 8, 10, 12},
        c2[] = {4, 6, 9, 11}, a, b;
    
    cin >> a >> b;

    if(a == 2){
        if(b == 2){
            YES;}
        else{
            NO;}
        return 0;
    }
    if(binary_search(&c1[0], &c1[6], a) && binary_search(&c1[0], &c1[6], b)){
        YES;}
    else if(binary_search(&c2[0], &c2[6], a) && binary_search(&c2[0], &c2[6], b)){
        YES;}
    else{
        NO;}
    return 0;
}
