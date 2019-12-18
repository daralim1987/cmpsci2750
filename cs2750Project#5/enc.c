//Dara Lim
//CS2750 project#5 part C

#include <stdio.h>
#include <ctype.h>

int main(){
    char keySymbol = '&';
    char c;
    printf("Enter several character one-by-one with Cntrl-C\n");
    printf("or Cntrl-D in the end of a sequence:\n");
    while((c = getchar())!= EOF ){
        c = c ^ keySymbol;
        if(iscntrl(c) != 0){  // c is control character
            c = c ^ keySymbol;  // get original character
            getchar();
            putchar(c);        //display original character
            putchar('\n');
        }
        else{
            
            getchar();
            putchar(c);
            putchar('\n');
        }
        
    }
    return 0;
}
         
