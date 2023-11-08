#include <stdio.h>
// link: https://vjudge.net/problem/AtCoder-abc070_a/origin
int main()
{
    char number[5];
    int tam, confirm=0;

    scanf(" %3s%n", number, &tam);
    char *start = &number[0], *end = &number[tam-1];

    while(start < end){
        if(*start != *end)
            confirm++;
        start++;
        end--;
    }
    !confirm ? printf("Yes\n") : printf("No\n");
}
