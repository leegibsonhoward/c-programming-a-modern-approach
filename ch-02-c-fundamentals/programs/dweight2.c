/* Computes the dimensional weight of a
   box from input provided by the user */

// The dweight2.c program suffers from one problem:
// it doesn’t work correctly if the user enters nonnumeric input. 

// add marco to eliminate magic number 166
#define INCHES_PER_POUND 166

#include <stdio.h>

int main()
{
  int height, length, width, volume, weight;

  printf("Enter height of box: ");
  scanf("%d", &height);
  printf("Enter length of box: ");
  scanf("%d", &length);
  printf("Enter width of box: ");
  scanf("%d", &width);
  volume = height * length * width;
  weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  return 0;
}
