/*
   Condense the dweight.c program by (1) replacing the assignments to height,
   length, and width with initializers and (2) removing the weight variable, instead
   calculating (volume + 165) / 166 within the last printf.
   */

#include <stdio.h>

int main()
{
  int height = 8, length = 12, width = 10, volume, weight;
  volume = height * length * width;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

  return 0;

}
