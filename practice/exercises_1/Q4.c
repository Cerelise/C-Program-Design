#include <stdio.h>

int main()
{
  int minator, flag, i, n;
  double deno, item, sum;

  printf("Enter n:");
  scanf("%d", &n);

  flag = 1;
  deno = 1.0;
  minator = 1;
  sum = 0;

  for (i = 1; i <= n; i++)
  {
    item = flag * deno / minator;
    sum = sum + item;
    flag = -flag;
    deno = deno + 1;
    minator = minator + 2;
  }
  printf("sum=%f\n", sum);

  return 0;
}