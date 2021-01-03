#include <stdio.h>
#include <math.h>

int main()
{
  int m, n, i;
  double sum;

  printf("Enter m,n:");
  scanf("%d%d", &m, &n);

  sum = 0;

  if (m > 0 && m <= n)
  {
    for (i = m; i <= n; i++)
    {
      sum = sum + (i * i + 1.0 / i);
    }
  }
  else
  {
    printf("Data has error");
  }

  printf("sum=%.2f\n", sum);
  return 0;
}