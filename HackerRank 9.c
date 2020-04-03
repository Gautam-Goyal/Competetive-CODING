/*TASK:-In this challenge, you have to create an array of size  dynamically, input the elements of the array, sum them and print the sum of the elements in a new line.

Input Format:-The first line contains an integer, .
              The next line contains  space-separated integers.

Output Format:-Print in a single line the sum of the integers in the array.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,s=0;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    for(i=0;i<n;i++)
    {
        s=s+ *(arr+i);
    }
    printf("%d",s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
