#include <stdio.h>
#include <stdlib.h>

struct Info
    {
    char cName[50];
    int iAge;
    char cAddress[50];
    char cCity[50];
    };

int main()
{
    char fileName[50];
    struct Info personalInformation1;
    struct Info personalInformation2;

    printf("First user: \n");
    printf( "Please enter your name: " );
    scanf( "%s", &personalInformation1.cName);
    printf( "Please enter how old you are: " );
    scanf( "%d", &personalInformation1.iAge);
    printf( "Please enter your adress: " );
    scanf( "%s", &personalInformation1.cAddress);
    printf( "Please enter your the city you live in: " );
    scanf( "%s", &personalInformation1.cCity);

    printf("\nSecond user: \n");
    printf( "Please enter your name: " );
    scanf( "%s", &personalInformation2.cName);
    printf( "Please enter your age: " );
    scanf( "%d", &personalInformation2.iAge);
    printf( "Please enter your adres: " );
    scanf( "%s", &personalInformation2.cAddress);
    printf( "Please enter your woonplaats: " );
    scanf( "%s", &personalInformation2.cCity);

    printf("\nName person 1: %s", personalInformation1.cName);
    printf("\nAge person 1: %d", personalInformation1.iAge);
    printf("\nAddress person 1: %s", personalInformation1.cAddress);
    printf("\nCity person 1: %s", personalInformation1.cCity);

    printf("\n\nName person 2: %s", personalInformation2.cName);
    printf("\nAge person 2 2: %d", personalInformation2.iAge);
    printf("\nAddress person 2: %s", personalInformation2.cAddress);
    printf("\nCity person 2: %s", personalInformation2.cCity);
    printf("\n");

    //print to file
    printf( "\nPlease enter the file name: " );
    scanf( "%s", &fileName);
    strcat(fileName, ".txt");
    FILE * f = fopen(fileName, "w+");


    fprintf(f, "\nName person 1: %s", personalInformation1.cName);
    fprintf(f, "\nAge person 1: %d", personalInformation1.iAge);
    fprintf(f, "\nAddress person 1: %s", personalInformation1.cAddress);
    fprintf(f, "\nCity person 1: %s", personalInformation1.cCity);

    fprintf(f, "\n\nName person 2: %s", personalInformation2.cName);
    fprintf(f, "\nAge person 2: %d", personalInformation2.iAge);
    fprintf(f, "\nAddress person 2: %s", personalInformation2.cAddress);
    fprintf(f, "\nCity person 2: %s", personalInformation2.cCity);
    fclose(f);

    printf("\nFile Created \n");
    return 0;
}
