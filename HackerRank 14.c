/*Task:-To arrange the no. of triangles (input) in increasing order according to their areas.
Input format:-3
              7 24 25-------A
              5 12 13-------B
              3 4 5---------C

Output format:-3 4 5--------C
               5 12 13------B
               7 24 25------A
            (FOR THIS CASE)
*******IF WE USE ONLY SINGLE LOOP THEN IT WILL COMPARE FIRSTLY (A) AND (B)----RESULT:- B , A
               (B AND A GOT INTERCHANGED)               (A) AND (C)----RESULT:- C , A ,therefore FINAL----B,C,A
*******HERE WE USED TWO LOOPS TO COMPARE THE TRIANGLES B AND C TOO WHICH WAS LEFT TO COMPARE DURING SINGLE LOOP
DUE TO WHICH FINAL RESULT BECOMES------- C,B,A*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	int i,j;
    float sum=0;
    int temp;
    int p[n];
    for(i=0;i<n;i++)
    {
        sum=(tr[i].a+tr[i].b+tr[i].c)/2.0;
        p[i]=(sum*(sum-tr[i].a)*(sum-tr[i].b)*(sum-tr[i].c));
    }
    for(j=0;j<n;j++)
    {
      for(i=0;i<n-j-1;i++)
      {
        if(p[i]>p[i+1])
        {
            temp=p[i];
            p[i]=p[i+1];
            p[i+1]=temp;

            temp=tr[i].a;
            tr[i].a=tr[i+1].a;
            tr[i+1].a=temp;

            temp=tr[i].b;
            tr[i].b=tr[i+1].b;
            tr[i+1].b=temp;

            temp=tr[i].c;
            tr[i].c=tr[i+1].c;
            tr[i+1].c=temp;
        }
      }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);//passing address.................for it (.) ,for &tr (->)
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
