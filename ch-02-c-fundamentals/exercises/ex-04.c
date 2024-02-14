/*
   Write a program that declares several int and float variables—without initializing
   them—and then prints their values. Is there any pattern to the values? (Usually there isn’t.)
   */

#include <stdio.h>

int main(void)
{
  int i1;
  int i2;
  int i3;
  float f1;
  float f2;
  float f3;

  printf("%d\n", i1);
  printf("%d\n", i2);
  printf("%d\n", i3);
  printf("%f\n", f1);
  printf("%f\n", f2);
  printf("%f\n", f3);
  return 0;
}

// unitialized varibles usually print random garbage values but on my system(64-bit debian 12)
// output is:
//
// 0
// 0
// 0
// 0.000000
// 0.000000
// 0.000000
