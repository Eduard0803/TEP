#include <stdio.h>
// link: https://vjudge.net/problem/CodeForces-977A/origin
int main()
{
    int n, div;

    scanf("%d %d", &n, &div);

    while(div--)
        n % 10 == 0 ? n /= 10 : n--;

    printf("%d", n);
}
