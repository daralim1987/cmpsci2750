//Dara Lim
//Project#4 part C
//This project convert character specified as second argument "," to third argument ";" and put in output file

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int getInd(char ch, char oldFile[])
{
    for(int i = 0; i < strlen(oldFile); i++){
        if(oldFile[i] == ch)
            return i;
        return -1;
    }
}

int main(int argc, char *argv[])
{
    FILE *fptr = fopen(argv[3], "r");
    FILE *output = fopen(argv[4], "w");
    char oldFile[20];
    strcpy(oldFile, argv[1]);
    char newFile[20];
    strcpy(newFile, argv[2]);
    char ch;
    
    while((ch = fgetc(fptr))!= EOF)
    {
        if(getInd(ch, oldFile)>=0)
            fprintf(output, "%c", newFile[getInd(ch, oldFile)]);
        else
            fprintf(output, "%c", ch);
    }
    
    return 0;
}

