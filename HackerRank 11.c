#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int a[n];
    int i,j,A,O,X;
    int maxA=0,maxO=0,maxX=0;
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            A=a[i]&a[j];
            O=a[i]|a[j];
            X=a[i]^a[j];
            if(A>maxA&&A<k)
            maxA=A;
            if(O>maxO&&O<k)
            maxO=O;
            if(X>maxX&&X<k)
            maxX=X;
        }
    }
    printf("%d\n%d\n%d",maxA,maxO,maxX);
}


int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
