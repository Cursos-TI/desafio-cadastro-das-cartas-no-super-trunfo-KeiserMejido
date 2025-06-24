#include <stdio.h>


int main() {
    
    char state, cod[3], city[20] ; 
    // state: letter that represents the state (e.g., 'T' for Tocantins)
    // cod: two-character code that represents each card
    int population, places ;
    // places: number of tourist attractions in the city
    float size, PIB;
    //size: area of the city in square kilometers (km²)
    //PIB: Gross Domestic Product of the city in Brazilian Reais (R$)
    //this section collects the card 1 infos 
    
    printf (" Wellcome to Super Trunfo!\n\n");
    printf (" Add the informations for card number 1\n\n");
    printf ("enter the initial of the state:\n");
    scanf (" %c", &state);

    printf ("Set the card code:\n");
    scanf ("%s", &cod);

    printf ("what's the population?:\n");
    scanf ("%d", &population);

    printf ("what's the city name?:\n");
    scanf ("%s", &city);

    printf ("what's the area of the city?:\n");
    scanf ("%f", &size);

    printf ("what's the PIB of the city?:\n ");
    scanf ("%f", &PIB);

    printf ("How many tourist attractions?:\n");
    scanf ("%d", &places);



    //shows the card 1 
    printf ("\n Card number 1:\n");
    printf ("state:%c \n", state);
    printf ("code: %c%s \n", state, cod);
    printf ("city name:%s \n", city);
    printf ("population is: %d \n", population);
    printf ("Area is: %f km² \n", size);
    printf ("the PIB is: R$%f \n", PIB);
    printf ("tourist attractions: %d \n", places);




 //this section collects the card 2 infos 

    printf (" Add the informations for card number 2\n\n");
    printf ("enter the initial of the state:\n");
    scanf ("%c", &state);

    printf ("Set the card code:\n");
    scanf ("%s", &cod);

    printf ("what's the city name?:\n");
    scanf ("%s", &city);

    printf ("what's the population?:\n");
    scanf ("%d", &population);

    printf ("what's the area of the city?:\n");
    scanf ("%f", &size);

    printf ("what's the PIB of the city?:\n ");
    scanf ("%f", &PIB);

    printf ("How many tourist attractions?:\n");
    scanf ("%d", &places);



    //shows the card 2
    printf ("\n Card number 1:\n");
    printf ("state:%c \n", state);
    printf ("code: %c%s \n", state, cod);
    printf ("city name:%s \n", city);
    printf ("population is: %d \n", population);
    printf ("Area is: %f km² \n", size);
    printf ("the PIB is: R$%f \n", PIB);
    printf ("tourist attractions: %d \n", places);

  



    return 0;
}
