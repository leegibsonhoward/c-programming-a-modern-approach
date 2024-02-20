/*
   Write calls of printf that display a float variable x in the following formats.

   (a) Exponential notation; left-justified in a field of size 8;
   one digit after the decimal point.

   (b) Exponential notation; right-justified in a field of size 10;
   six digits after the decimal point.

   (c) Fixed decimal notation; left-justified in a field of size 8;
   three digits after the decimal point.

   (d) Fixed decimal notation; right-justified in a field of size 6;
   no digits after the decimal point.

*/

#include <stdio.h>

int main(void)
{
  float x;

  x = 892.32f;

  printf("using %%e: %-8.1e|\n", x);
  printf("using %%e: %10.6e|\n", x);
  printf("using %%f: %-8.3f|\n", x);
  printf("using %%f: %6f|\n", x);         // missed the .0 of 6.0

  return 0;

}

