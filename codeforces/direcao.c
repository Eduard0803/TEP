#include <stdio.h>
// link: https://codeforces.com/group/rzjPIoqixu/contest/427860/problem/D
int main()
{
    char input[10], direcao[10];

    scanf(" %s", input);
    scanf(" %s", direcao);

    if(input[0] == direcao[0]){
        printf("0\n");
        return 0;
    }

    if(input[0] == 's')
        if(direcao[0] == 'n')
            printf("180\n");
        else
            printf("90\n");

    else if(input[0] == 'n')
        if(direcao[0] == 's')
            printf("180\n");
        else
            printf("90\n");
    else if(input[0] == 'l')
        if(direcao[0] == 'o')
            printf("180\n");
        else
            printf("90\n");
    else if(input[0] == 'o')
        if(direcao[0] == 'l')
            printf("180\n");
        else
            printf("90\n");
    return 0;
}
