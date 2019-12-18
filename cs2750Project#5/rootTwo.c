#include<stdio.h>
#include<math.h>
#include"rootTwo.h"
#include"delta.h"

void PrTwo(int x, int y, int z)
{
   float root1, root2;
   root1 = (-y+sqrt(z))/(2.0*x);
   root2 = (-y-sqrt(z))/(2.0*x);
   printf("There are two real solutions: %.4f and %.4f\n", root1, root2);
}  
