#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstnumber;
    int secondnumber;
    int highestnumber;

    //User enters a number, program assigns it to firstnumber. Returns the number to user.
    printf( "Please enter a number: " );
    scanf( "%d", &firstnumber );
    printf( "\n" );
    printf( "You entered %d", firstnumber);
    printf( "\n" );

    //User enters another number, program assigns it to secondnumber. Returns the number to user.
    printf (" Please enter another number: ");
    scanf ("%d", &secondnumber);
    printf( "\n" );
    printf( "You entered %d", secondnumber);
    printf( "\n" );

    //Checks if the numbers are equal, if not, checks which one is bigger.
    if( secondnumber == firstnumber )
    {
        printf("The numbers are equal.");
    }
    else if(firstnumber > secondnumber)
    {
        highestnumber = firstnumber;
        printf("the highest number is %d", highestnumber);
    }
    else if(secondnumber > firstnumber)
    {
        highestnumber = secondnumber;
        printf("the highest number is %d", highestnumber);
    }
    //Asks for input before closing program.
    getchar();
    //returns 0 to show program ran successfully.
    return 0;
}
