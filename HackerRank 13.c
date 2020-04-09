/*TASK:-Given a string,s, consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format:-The first line contains a string,num  which is the given number.

             All the elements of num are made of english alphabets and digits.

Output Format:-Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9.

Sample Input 0:-a11472o5t6
Sample Output 0:-0 2 1 0 1 1 1 1 0 0
Explanation 0:-In the given string:

 1 occurs two times.
 2,4,5,6 and 7 occur one time each.
The remaining digits 0,3,8 and 9 don't occur at all.

Sample Input 1:-lw4n88j12n1
Sample Output 1:-0 2 1 0 1 0 0 0 2 0*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   char *s;
   int i,j,count=0;
   s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

   for(i=0;i<=9;i++)
   {
       do
       {
            for(j=0,count=0;j<=strlen(s);j++)
            {
            if(*(s+j)-48 == i)
            {

                count++;
            }
            }

       }while(j<strlen(s));

       printf("%d ",count);
   }
   return 0;
}
