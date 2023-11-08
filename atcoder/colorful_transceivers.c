#include <stdio.h>

//link: https://vjudge.net/problem/AtCoder-abc097_a

int abs(int n){
    if(n < 0)
        return n*-1;
    else
        return n;
}

int main()
{
    int a, b, c, d, flag=0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(abs(a-c) <= d)
        printf("Yes\n");
    else if(abs(a-b) <= d && abs(b-c) <= d)
        printf("Yes\n");
    else
        printf("No\n");
}
