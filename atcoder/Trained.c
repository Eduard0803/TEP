#include <stdio.h>
#define NUM 100001
// link: https://vjudge.net/problem/AtCoder-abc065_b/origin
int main ()
{
  int N, i, button=1, ans=0, flag=0;
  int a[NUM] = {0};

  scanf("%d", &N);
  for (i = 1; i <= N; i++)
    scanf("%d", &a[i]);

  button = a[button];
  ans++;
  i = 0;

  while (i < N && button != 1)
  {
    if (button == 2)
    {
      flag = 1;
      break;
    }
    button = a[button];
    ans++;
    i++;
  }

  if (flag == 1)
    printf("%d\n", ans);
  else
    printf("%d\n", -1);
}
