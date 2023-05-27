#include <stdio.h>

int main()
{
    int input1, input2;
    scanf("%d %d", &input1, &input2);
    input1 += input2;

    printf((input1%2==0 ? "Pedro\n" : "Lucas\n"));
    return 0;
}
