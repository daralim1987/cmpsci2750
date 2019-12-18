#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    printf("The command are:\n");
    for(int i = argc-1; i > 0; i--){
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;

}
