#include <stdio.h>
// link: https://codeforces.com/group/rzjPIoqixu/contest/427860/problem/C
int main()
{
    int n_casos, count=0;
    char gabarito, input;

    scanf("%d", &n_casos);
    for(int i=0; i<n_casos; i++){
        scanf(" %c %c", &input, &gabarito);
        if(gabarito == input)
            count++;
    }
    printf("Nota: %.2f\n", 10.0*count/n_casos);
}
