#include <stdio.h>
#include <stdlib.h>
#include "stairs.c"


int main()
{

    printf("Hello!\n");
    int numSteps;

    printf("How many steps do you want to climb?\n");
    scanf(" %d", &numSteps);

    stairs(numSteps);

    return 0;

    // char line[300];
    // FILE * fpointer = fopen("employees.txt", "r");


    // for (int i = 0; i <= 4; i++){
    // fgets(line, 300, fpointer);
    // printf("%s",line);
    // }

    // return 0;

}
