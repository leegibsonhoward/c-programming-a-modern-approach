// Extend the program in Programming Project 1 to handle three-digit numbers.

//  Hint: If n is an integer, then n % 10 is the last
//  digit in n and n / 10 is n with the last digit removed.

#include <stdio.h>

int main(void)
{
  int d1, d2, d3, n;

  printf("Enter a two-digit number: ");
  scanf("%d", &n);
  d1 = n / 100;
  d2 = (n / 10) % 10;
  d3 = n % 10;

  printf("%d%d%d\n", d3, d2, d1 );

  // my implementation using %1d specifiers with scanf
  //printf("Enter a two-digit number: ");
  //scanf("%1d%1d", &d1, &d2 );
  //printf("The reversal is: %d%d\n", d2, d1 );
  return 0;

}
