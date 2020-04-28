#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()  
{ 
    while ( 1 ) 
    { 
        printf( "Enter a non-negative number (0 - exit): " ); 

        int n; 

        if ( ( scanf( "%d", &n ) != 1 ) || ( n <= 0 ) ) break; 

        if ( INT_MAX / 2 < n )  
        { 
            n = INT_MAX / 2; 
        } 

        int width = 1; 

        for ( int tmp = n; tmp /= 10; ) ++width; 

        putchar( '\n' ); 

        int m = 2 * n - 1; 

        for ( int i = 0; i < m; i++ ) 
        { 
            for ( int j = 0; j < m; j++ ) 
            {
                int value1 = abs( n - i - 1 ) + 1;
                int value2 = abs( n - j - 1 ) + 1;

                printf( "%*d ", width, value1 < value2 ? value2 : value1 );
            } 
            putchar( '\n' ); 
        } 

        putchar( '\n' ); 
    } 

    return 0; 
 }