#include<studio.h>
int square ( int v );

int main( )
{
        int x, n :
        printf ( "\nEnter some number for finding square \n");
        scanf ( "%d", &n) ;
        x = square ( n ) ;
        printf ( "\nSquare of the given number %d is %d" ,n,x );
        printf("\n\n");
        return 0:
}
int square ( int v )
{
        int p ;
        p = v * v ;
        return ( p ) ;
}
