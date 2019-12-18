/*Dara Lim
*This program is to print the given string in reversing order
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char *before, char *after){
    int start, len;
    int end = 0;
    len = strlen(before);
    for(start = len-1; start >= 0; start--)
    {
        after[end] = before[start];
        end++;
    }
    after[end] = '\0';
}
int main(int argc, char*argv[])
{
    char a[50];
    char b[50];
    printf("Enter any string: \n");
    scanf("%s",a);
    reverse(a,b);
    printf("The before string is: %s\n", a);
    printf("The after string is: %s\n", b);
    return 0;
}
