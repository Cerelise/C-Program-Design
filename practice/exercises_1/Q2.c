#include <stdio.h>

int main()
{
  int x;
  double y;

  printf("用户的月用电量:");
  scanf("%d", &x);

  if (x <= 50)
  {
    y = 0.53 * x;
  }
  else
  {
    y = 0.53 * x + 0.58 * (x - 50);
  }
  printf("该用户此月耗电量为%d,应支付的电费为%.2f元\n", x, y);
  return 0;
}