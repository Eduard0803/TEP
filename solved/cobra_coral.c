#include <stdio.h>

int main()
{
    int v[4];

    for(int i=0; i<4; i++)
        scanf("%d", &v[i]);
    
    if(v[0] == v[3])
        printf("F\n");
    else
        printf("V\n");
}
