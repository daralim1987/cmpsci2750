#include<stdio.h>
#include"rootTwo.h"
#include"delta.h"
#include"rootNo.h"
#include"rootOne.h"
#include<math.h>

int main()
{
    
   int a, b, c, rv;

   printf("Enter integer coefficients of the quadratic equation: a, b, c ");
   scanf("%d%d%d", &a, &b, &c);
   
   rv = radicand (a, b, c);
   printf("returned value = %d\n", rv);
   if (rv == -1)
      PrNo();
   else
        if (rv == 0)
           PrOne(a,b);
        else
            PrTwo(a, b, rv);
   return 0;
}
