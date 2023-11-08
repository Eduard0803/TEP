#include <stdio.h>
// link: https://codeforces.com/group/JDDLXp8GNX/contest/428079/problem/B
int main()
{
    int input, control=0;

    scanf("%d", &input);
    printf("%d horas de tratamento:\n", input);

    if(input % 3 == 0){
        printf("Troca do soro\n");
        control++;
    }
    if(input % 5 == 0){
        printf("Injecao de antibioticos\n");
        control++;
    }
    if(input % 12 == 0){
        printf("Reavaliacao\n");
        control++;
    }
    if(control == 0)
        printf("Monitoramento dos sinais vitais\n");
    return 0;
}
