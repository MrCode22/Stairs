#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int stairs(int numSteps){

    //ask user how many steps are wanted
    //use a rand num for each "block" in staircase
    //use a nested loop to print the rows and cols of stairs

    char dir[10];
    printf("Which direction do you want the stairs to be?\n");
    scanf("%s", dir);

    char left[10] = "left"; // created chars to check user input
    char right[10] = "right";
    char real[10] = "real";

    int resultLeft = strcmp(dir,left); // compares user input to the various 
    int resultRight = strcmp(dir,right);
    int resultReal = strcmp(dir,real);
    int k;

    if (resultRight == 0){ //checks if user asks for staircase facing right

    for (int row = 0; row < numSteps; row++){
            printf("\n");
        for (int col = 0; col < numSteps; col++){
                if (row >= col){
                    printf("%d", randomNumber());
                }
        }
    }
    }else if (resultLeft == 0){ //checks if user asks for staircase facing left

    for (int row = 0; row < numSteps; row++){
            printf("\n");
        for (int col = 0; col < numSteps; col++){
                if (col < numSteps - row -1){
                    printf(" ");
                }else{
                    printf("%d", randomNumber());
                    }
        }
    }}
    else if (resultReal == 0){ //checks if user asks for staircase that looks like real stairs
        for (int row = 0; row <= numSteps; row++){
            if (row % 2 != 0){
                k = row + 1;}
			else{
				k = row;}
        for (int col = 0; col < k; col++){
                    printf("%d", randomNumber());}
        printf("\n");
        }

    }else{
	    // error message
        printf("\nYou didn't give a correct num/direction!");
    }


    printf("\n");

}

int randomNumber(){
	//builds actual chars of staircase of random numbers
    int randNum = rand() % 10;
    return randNum; // assigns a random num 1-9
}
