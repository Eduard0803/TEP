#include <stdio.h>

//link: https://vjudge.net/problem/AtCoder-abc148_a

int main()
{
    int v[3] = {0}, input, i;

    for(i=0; i<2; i++){
        scanf("%d", &input);
        v[--input]++;
    }

    if(v[0] == 0)
        printf("1\n");
    else if(v[1] == 0)
        printf("2\n");
    else
        printf("3\n");
}
