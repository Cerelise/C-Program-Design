#include <stdio.h>
#include <math.h>

int main()
{
  int i, n;
  double sum, item;

  printf("Enter n:");
  scanf("%d", &n);
  sum = 0;

  for (i = 1; i <= n; i++)
  {
    item = sqrt(i);
    sum += item;
  }
  printf("SQRT of numbers from 1 to %d is %.2f\n", n, sum);

  return 0;
}
