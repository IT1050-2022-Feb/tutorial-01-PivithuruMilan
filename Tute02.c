/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() 
{
  float distance,cost;
  printf("Enter the distance van has travelled :");
  scanf("%f",&distance);
  
    if(distance <= 30 && distance >= 0)
      {cost = distance * 50.0;}
  else if(distance > 30)
      {cost = (30*50.0) + (distance - 30) * 40.0;}
  else
      printf("The distance is not valid");
    
printf(" The amount is :%.2f",cost);     
      return 0;
}
