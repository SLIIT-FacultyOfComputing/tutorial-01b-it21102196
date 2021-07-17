/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,sum=0;
  float avg;

  printf("Enter the mark1 and mark 2 : ");
  scanf("%d %d",&mark1,&mark2);
  
  sum = mark1+mark2;
  avg = sum/2.0;
  printf("Sum is %d\n",sum);
  printf("Average is %.2f\n",avg);
  return 0;
}

