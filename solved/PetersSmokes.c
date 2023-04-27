#include <stdio.h>
// link: https://vjudge.net/problem/UVA-10346/origin
int main()
{
    int n, k;

    while(scanf("%d %d", &n, &k) != EOF)
        printf("%d\n", n+((n-1)/(k-1)));
}
