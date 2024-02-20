#include <stdio.h>

int main(void)
{
  float x, y;
  int i;

  printf("Enter 3 values (float int float): ");
  scanf("%f%d%f", &x, &i, &y);

  printf("%f|%d|%f\n", x, i, y);

  return 0;
}
