#include <stdio.h>

int main()
{
  int a, b, c, d, sum;
  double avanage;

  printf("Enter four int:");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  sum = a + b + c + d;
  avanage = sum / 4;

  printf("sum=%d,avanage=%.1f\n", sum, avanage);
  return 0;
}