#include <stdio.h>


int main() {
    
    char state, cod[2], city[20] ; 
    // state: letter that represents the state (e.g., 'T' for Tocantins)
    // cod: two-character code that represents each card
    int population, places ;
    // places: number of tourist attractions in the city
    float size, PIB;
    //size: area of the city in square kilometers (km²)

 
    printf (" Wellcome to Super Trunfo!\n\n");
    printf (" Add the informations for card number 1\n\n");
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


    return 0 








  



    return 0;
}
