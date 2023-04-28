#include <stdio.h>
// link: https://vjudge.net/problem/AtCoder-abc062_b/origin
int main()
{
    int nl, nc, i, m, cont=0;

    scanf("%d %d", &nl, &nc);

    char str[nl][nc+2];

    for(i=0; i<nl; i++){
        scanf(" %s", str[i]);
    }

    for(i=0; i<nc+2; i++){
        printf("#");
    }
    printf("\n");
    for(i=0; i<nl; i++){
        printf("#%s#\n", str[i]);
    }
    for(i=0; i<nc+2; i++){
        printf("#");
    }
    printf("\n");
}
