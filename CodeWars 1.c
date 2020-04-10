/*Given an array of integers your solution should find the smallest integer.

For example:

Given [34, 15, 88, 2] your solution will return 2
Given [34, -345, -1, 100] your solution will return -345
You can assume, for the purpose of this kata, that the supplied array will not be empty*/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int find_smallest_int(int *vec, size_t len)
{
int i,min ;
min=vec[0];
for (i=1;i<len;i++)
if (min >vec[i])
min=vec[i];
    return min;
}
int main()
{

    int i,*vec;
    int len;
    scanf("%d",&len);


    vec=(int *)malloc(len*sizeof(int));

    for(i=0;i<len;i++)
    {
        scanf("%d",(vec+i));
    }

    printf("%d",find_smallest_int(vec,len));
}
