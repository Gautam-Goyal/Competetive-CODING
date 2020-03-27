/*TASK:-Given an array, of size n, reverse it.
INPUT FORMAT:-The first line contains an integer,n , denoting the size of the array. The next line contains n space-separated
integers denoting the elements of the array.
OTHER SOLUTION:-
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }




    for(i = num-1; i>-1; i--)
        printf("%d ", *(arr + i));
    return 0;
}
*/
#include <stdio.h>
int main()
{
   int n, c, d, a[100], b[100];
    scanf("%d", &n);

   for (c = 0; c < n ; c++)
      scanf("%d", &a[c]);


   for (c = n-1, d = 0; c >=0; c--, d++)
      b[d] = a[c];


   for (c = 0; c < n; c++)
      a[c] = b[c];


   for (c = 0; c < n; c++)
      printf("%d ", a[c]);

   return 0;
}
