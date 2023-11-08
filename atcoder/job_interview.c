#include <stdio.h>
// link: https://atcoder.jp/contests/abc298/tasks/abc298_a 
int main()
{
    int n, great=0, lost=0;
    char buffer;
 
    scanf("%d", &n);
 
    for(int i=0; i<n; i++){
        scanf(" %c", &buffer);
        if(buffer == 'o')
            great++;
        if(buffer == 'x')
            lost++;
    }
    if(great && !lost)
        printf("Yes\n");
    else
        printf("No\n");
}
