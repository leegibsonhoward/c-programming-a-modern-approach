/* 
   DIDNT GET THIS ONE CORRECT!!!

   Write a program that asks the user for a 24-hour time,
   then displays the time in 12-hour
form:
Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM
*/

#include <stdio.h>

int main(void)
{
  int hours, minutes;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  printf("Equivalent 12-hour time: ");
  if (hours == 0)
    printf("12:%.2d AM\n", minutes);
  else if (hours < 12)
    printf("%d:%.2d AM\n", hours, minutes);
  else if (hours == 12)
    printf("%d:%.2d PM\n", hours, minutes);
  else
    printf("%d:%.2d PM\n", hours - 12, minutes);

  return 0;
}
