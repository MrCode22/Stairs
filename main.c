#include <stdio.h>
#include <stdlib.h>
#include "stairs.c"


int main()
{

    printf("Hello!\n");// say hello and init var
    int numSteps;

    printf("How many steps do you want to climb?\n"); //query user so as to pass numSteps to stairs function
    scanf(" %d", &numSteps);

    stairs(numSteps); //call stairs.c and pass numSteps

    return 0;
}
