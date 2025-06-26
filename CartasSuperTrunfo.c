#include <stdio.h>


int main() {
    
    //the variants numbered with 2, correspond to card 2

    char state, cod[3], city[20], state2, cod2[3], city2[20];
    // state: letter that represents the state (e.g., 'T' for Tocantins)
    // cod: two-character code that represents each card
    int population, places, population2, places2;
    // places: number of tourist attractions in the city
    float size, PIB, size2, PIB2; 
    //size: area of the city in square kilometers (km²)
    //PIB: Gross Domestic Product of the city in Brazilian Reals (R$)
    float PIB_per, pop_density, PIB_per2, pop_density2 ;
    // PIB_per: GDP per capita, average amount of money each person
    // pop_density: population density of the city (people per km²)
    
    

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

    //calculates the GDP and population density for card 1
    PIB_per = PIB / population;
    //calculates the population density of the city for card 1
    pop_density = population / size;



    
 //this section collects the card 2 infos 
    printf (" Add the informations for card number 2\n\n");
    printf ("enter the initial of the state:\n");
    scanf (" %c", &state2);

    printf ("Set the card code:\n");
    scanf ("%s", &cod2);

    printf ("what's the population?:\n");
    scanf ("%d", &population2);

    printf ("what's the city name?:\n");
    scanf ("%s", &city2);

    printf ("what's the area of the city?:\n");
    scanf ("%f", &size2);

    printf ("what's the PIB of the city?:\n ");
    scanf ("%f", &PIB2);

    printf ("How many tourist attractions?:\n");
    scanf ("%d", &places2);

    //calculates the GDP and population density for card 2
    PIB_per2 = PIB / population;
    //calculates the population density of the city for card 2
    pop_density2 = population / size;


//shows the card 1 
    printf ("\n Card number 1:\n");
    printf ("Initial lettler:%c \n", state);
    printf ("card code: %c%s \n", state, cod);
    printf ("city name:%s \n", city);
    printf ("population is: %d people \n", population);
    printf ("Area is: %.2f km² \n", size);
    printf ("the PIB is: R$%.2f \n", PIB);
    printf ("tourist attractions: %d \n", places);
    printf ("PIB per Capita is R$%.2f per person \n", PIB_per);
    printf ("Population Density is %.2f person per km² \n", pop_density);

//shows the card 2
    printf ("\n Card number 2:\n");
    printf ("Initial lettler:%c \n", state2);
    printf ("card code: %c%s \n", state2, cod2);
    printf ("city name:%s \n", city2);
    printf ("population is: %d people \n", population2);
    printf ("Area is: %.2f km² \n", size2);
    printf ("the PIB is: R$%.2f \n", PIB2);
    printf ("tourist attractions: %d \n", places2);
    printf ("PIB per Capita is R$%.2f per person \n", PIB_per2);
    printf ("Population Density is %.2f person per km² \n", pop_density2);


    return 0;
}
