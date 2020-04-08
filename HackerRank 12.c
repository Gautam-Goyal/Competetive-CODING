#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int length,i;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    length=strlen(s);

    for(i=length-1;i>=0;i--)
    {
        if(*(s+i)==' ')
        *(s+i)='\n';

    }

    for(i=0;i<=length-1;i++)
    {
         printf("%c",*(s+i));
    }
    return 0;

    }
