/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int number,i,sum = 0;
  printf("Enter a positive number :");
  scanf("%d",&number);
  if(number <= 0)
  {
    printf("\nEnter a positive number");
      return 1;
  }
  else
  {
    for(i = 0; i <= number ;i++)
    {
      sum = i + sum;
    }
    printf("\nsum = %d",sum);
  } 
    
    
    
  return 0;
}

