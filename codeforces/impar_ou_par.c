#include <stdio.h>
// link: https://codeforces.com/group/JDDLXp8GNX/contest/428079/problem/A
int main()
{
    int input1, input2;

    scanf("%d %d", &input1, &input2);

    input1 += input2;

    if(input1 % 2 == 0)
        printf("Pedro\n");
    else
        printf("Lucas\n");
    return 0;
}
