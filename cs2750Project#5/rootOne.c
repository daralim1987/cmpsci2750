#include<stdio.h>
#include<math.h>
#include"rootOne.h"

void PrOne(int x, int y)
{
   float root;
   root = -(float)y/(2*x);       
   printf("There is one real solution: %.4f\n", root);
}
