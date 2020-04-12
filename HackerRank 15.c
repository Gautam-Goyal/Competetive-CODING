/*TASK:-Snow Howler is the librarian at the central library of the city of HuskyLand. He must handle requests which come in the following forms:
        1 x y : Insert a book with y pages at the end of the x shelf.
        2 x y : Print the number of pages in the y book on the x shelf.
        3 x : Print the number of books on the x shelf.

Sample Input 0

5
5
1 0 15
1 0 20
1 2 78
2 2 0
3 0
Sample Output 0

78
2

Explanation 0

There are 5 shelves and 5 requests, or queries.
- 1 Place a 15 page book at the end of shelf 0.
- 2 Place a 20 page book at the end of shelf 0.
- 3 Place a 78 page book at the end of shelf 2.
- 4 The number of pages in the 0th book on the 2nd shelf is 78.
- 5 The number of books on the 0th shelf is 2.
*/
#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int i;
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    total_number_of_books=(int*)malloc(sizeof(int)*total_number_of_shelves);

    total_number_of_pages=(int**)malloc(sizeof(int*)*total_number_of_shelves);

    for(int i=0; i<total_number_of_shelves; i++){
        total_number_of_books[i]=0;
        total_number_of_pages[i]=(int*)malloc(sizeof(int));
    }

    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);

        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             */
            int x, y;
            scanf("%d %d", &x, &y);
            *(total_number_of_books+x)+=1;
            *(total_number_of_pages+x)=realloc(*(total_number_of_pages+x), *        (total_number_of_books+x)*sizeof(int));
            *(*(total_number_of_pages+x)+*(total_number_of_books+x)-1)=y;


        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }

    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }

    if (total_number_of_pages) {
        free(total_number_of_pages);
    }

    return 0;
}
