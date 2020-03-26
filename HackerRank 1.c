/*TASK-You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets a with
 the sum of them, and b with the absolute difference of them.
a'=a+b
b'=|a-b|
INPUT FORMAT-The input will contain two integers,a and b, separated by a newline.
OUTPUT FORMAT-You have to print the updated value of a and b, on two different lines.

Note: Input/ouput will be automatically handled. You only have to complete the function described in the 'task' section*/

#include <stdio.h>

void result(int *x,int *y)
{
    int t;
    t=*x+*y;
    *y=abs(*x-*y);
    *x=t;
    
}

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    result(&a,&b);
    printf("%d",a);
    printf("\n");
    printf("%d",b);
    return 0;
}
