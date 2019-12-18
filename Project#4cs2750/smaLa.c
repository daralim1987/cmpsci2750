#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    char str[100];
    char smallest[100];
    char largest[100];
    printf("Enter word \n");
    scanf("%s", str);
    strcpy(smallest, str);
    strcpy(largest, str);
    do{
        printf("Enter word \n");
        scanf("%s", str);
        if(strcmp(largest, str) < 0){
            strcpy(largest, str);
        }
        if(strcmp(smallest, str) > 0){
            strcpy(smallest, str);
        }
        
    }while(strlen(str)!=3);
    printf("Largest word:%s\n", largest);
    printf("Smallest word:%s\n", smallest);
    return 0;
}

