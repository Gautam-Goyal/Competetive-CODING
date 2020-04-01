#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,s=0,t,remainder;
    scanf("%d", &n);

    t=n;

    while(t!=0)
    {
        remainder=t%10;
        s=s+remainder;
        t=t/10;
    }
    printf("%d",s);

    return 0;
}
