#include <stdio.h>

int main(void)
{
  // ISBN contains 5 groups of digits
  // GS1 prefix, Group identifier, Publisher code, Item number, Check digit
  int gs1p, gi, pc, in, cd;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gs1p, &gi, &pc, &in, &cd);

  printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gs1p, gi, pc, in, cd);

}
