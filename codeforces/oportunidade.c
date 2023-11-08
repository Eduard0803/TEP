#include <stdio.h>
// link: https://codeforces.com/group/JDDLXp8GNX/contest/426720/problem/B
int main()
{
    int valor_max, n_eventos, count_empres=0, input, saldo=0;

    scanf("%d %d", &valor_max, &n_eventos);

    while(n_eventos){
        n_eventos--;
        scanf("%d", &input);
        saldo += input;
        if(saldo < 0){
            count_empres += saldo;
            saldo = 0;
        }
    }
    count_empres *= -1;
    if(count_empres > valor_max)
        printf("-1\n");
    else
        printf("%d\n", count_empres);
    return 0;
}
