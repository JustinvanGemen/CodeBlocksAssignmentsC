#include <stdio.h>
#include <stdlib.h>

int main()
{

    char naamLetters[50];
    int leeftijdJaar;

    float gewichtKilo;

    int lengteCentimeter;
    float lengteMeter;

    float bmi;


    printf("Wat is uw naam? \n");
    scanf(" %s", &naamLetters);
    printf("hoe oud ben je %s ? \n", naamLetters);
    scanf("%d", &leeftijdJaar);
    printf("Wat is uw gewicht in kg ? \n");
    scanf("%f", &gewichtKilo);
    printf("hoe lang bent u in meters? \n");
    scanf("%f", &lengteMeter);

    bmi = gewichtKilo/(lengteMeter*lengteMeter);

    if (bmi < 18.5) {
        printf("\n Beste %s ,",naamLetters);
        printf("U bent %i jaar oud\n", leeftijdJaar);
        printf(" U heeft een BMI van %f, en uw gewicht status is ondergewicht\n U moet meer letten op uw diet en een beetje aankomen.\n\n", bmi);
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        printf("\n Beste %s ,",naamLetters);
        printf("U bent %i jaar oud\n", leeftijdJaar);
        printf(" U heeft een BMI van %f, en uw gewicht status is gezond\n Doe uw best om zo door te gaan!\n\n", bmi);
    }
    else if(bmi >=25 && bmi < 29.9){
        printf("\n Beste %s ,",naamLetters);
        printf("U bent %i jaar oud\n", leeftijdJaar);
        printf(" U heeft een BMI van %f, en uw gewicht status is gemiddeld overgewicht\n Je loopt niet echt een risico, maar je mag niet dikker worden.\n\n", bmi);
    }
    else if(bmi >=30 && bmi < 39.9){
        printf("\n Beste %s ,",naamLetters);
        printf("U bent %i jaar oud\n", leeftijdJaar);
        printf(" U heeft een BMI van %f, en uw gewicht status is overgewicht\n Verhoogde kans op allerlei aandoeningen zoals diabetes, hartaandoeningen en rugklachten. Je zou 5 tot 10 kg moeten vermageren.\n\n", bmi);
    }
    else if(bmi >= 40){
        printf("\n Beste %s ,",naamLetters);
        printf("U bent %i jaar oud\n", leeftijdJaar);
        printf(" U heeft een BMI van %f, en uw gewicht status is hevig overgewicht\n Je moet dringend vermageren want je gezondheid is in gevaar\n\n", bmi);
    }
        printf("Goobye!");
    return 0;
    }
