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
  int i = 1,n;
  int sum = 0;
  
  printf("Ïnput any number:");
  scanf("%d",&n);

  while (i<=n)
  { 
   sum=sum+i;
   i++;
    
  }
  printf("%d",sum);
    
  
  return 0;
}

