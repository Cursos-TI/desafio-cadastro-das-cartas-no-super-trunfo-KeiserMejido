#include <stdio.h>


int main() {
    
//the variants numbered with 2, correspond to card 2
    

    char state, cod[3], city[20], state2, cod2[3], city2[20];
// state: letter that represents the state (e.g., 'T' for Tocantins)
// cod: two-character code that represents each card
    int places, places2, population_winner, size_winner, PIB_winner, places_winner, PIB_per_winner, pop_density_winner, SuperPower_winner ;
// places: number of tourist attractions in the city
    unsigned long int population, population2;
//SuperPower: the strength of the card, calculated by summing all its numerical attributes.
    float size, size2; 
    double PIB, PIB2, SuperPower, SuperPower2 ;
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
    scanf ("%lu", &population);

    printf ("what's the city name?:\n");
    scanf ("%s", &city);

    printf ("what's the area of the city?:\n");
    scanf ("%f", &size);

    printf ("what's the PIB of the city?:\n ");
    scanf ("%lf", &PIB);

    printf ("How many tourist attractions?:\n");
    scanf ("%d", &places);

//calculates the GDP and population density for card 1
    PIB_per = PIB / population;
//calculates the population density of the city for card 1
    pop_density = (float) population / size;

    SuperPower = (float)population + size + PIB + (float)places + PIB_per + (1.0 / pop_density);
    
    
 //this section collects the card 2 infos 
    printf (" Add the informations for card number 2\n\n");
    printf ("enter the initial of the state:\n");
    scanf (" %c", &state2);

    printf ("Set the card code:\n");
    scanf ("%s", &cod2);

    printf ("what's the population?:\n");
    scanf ("%lu", &population2);

    printf ("what's the city name?:\n");
    scanf ("%s", &city2);

    printf ("what's the area of the city?:\n");
    scanf ("%f", &size2);

    printf ("what's the PIB of the city?:\n ");
    scanf ("%lf", &PIB2);

    printf ("How many tourist attractions?:\n");
    scanf ("%d", &places2);

    //calculates the GDP and population density for card 2
    PIB_per2 = PIB2 / population2;
    //calculates the population density of the city for card 2
    pop_density2 = (float) population2 / size2;

    SuperPower2 = (float)population2 + size2 + PIB2 + (float)places2 + PIB_per2 + (1.0 / pop_density2);

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
    printf ("The Super Power is %.2f \n", SuperPower );

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
    printf ("The Super Power is %.2f \n", SuperPower2 );

//winner section
    population_winner = population > population2;
    size_winner = size > size2;
    PIB_winner = PIB > PIB2; 
    places_winner = places > places2;
    PIB_per_winner = PIB_per > PIB_per2;
    pop_density_winner = pop_density < pop_density2;
    SuperPower_winner = SuperPower > SuperPower2;


   printf("\n WINNER SECTION \n");
   printf("(1) means Card 1 won — (0) means Card 2 won.\n\n");

   printf("Population: %d\n", population_winner);
   printf("Largest Area: %d\n", size_winner);
   printf("Highest GDP (PIB): %d\n", PIB_winner);
   printf("Most Tourist Attractions: %d\n", places_winner);
   printf("Best GDP per Capita: %d\n", PIB_per_winner);
   printf("Lowest Population Density: %d\n", pop_density_winner);
   printf("\nSuper Power Clash: %d\n", SuperPower_winner);



 return 0;
}
