/*TASK:-Given a positive n integer denoting , do the following:

If ,1<=n<=9 then print the lowercase English word corresponding to the number (e.g., one for 1 , two for 2 , etc.).
If , n>9 print Greater than 9.
OR
#include <stdio.h>
static const char *strings[] = {"one","two","three","four","five","six","seven","eight","nine"};
int main()
{
    int n = 0;
    if (scanf("%d",&n) < 1)
        return 1;

    if (n >= 1 && n <= 9)
        printf("%s",strings[n-1]);
    else
        printf("Greater than 9");

    return 0;
}*/
#include <stdio.h>
#include <conio.h>
int main()
{
int r,n;
scanf("%d",&n);

       if(n>=0&&n<=9)
        {
            switch(n)
            {
                case 0:
                printf("zero");
                break;
                case 1:
                printf("one");
                break;
                case 2:
                printf("two");
                break;
                case 3:
                printf("three");
                break;
                case 4:
                printf("four");
                break;
                case 5:
                printf("five");
                break;
                case 6:
                printf("six");
                break;
                case 7:
                printf("seven");
                break;
                case 8:
                printf("eight");
                break;
                case 9:
                printf("nine");
                break;
            }
        }
        else
        printf("Greater than 9");

}
