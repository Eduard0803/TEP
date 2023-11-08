#include <stdio.h>
// link: https://vjudge.net/problem/AtCoder-abc065_a/origin
int main()
{
  int x,a,b;

  scanf("%d %d %d",&x,&a,&b);
  if(x+a<b) 
    printf("dangerous\n");
  else if(a<b && b<=x+a) 
    printf("safe\n");
  else 
    printf("delicious\n");
}