
#include <stdio.h>
#include "dice.h"

int main () {
	
	while (1) {
    char buffer[2];
    printf("What number will I roll?: ");
		fgets(buffer,2,stdin);
    int guess;
    guess = atoi(buffer);
    
    int roll;
    roll = dice();

    if (guess==roll) {
       printf("Hey, you guessed right!\r\n");
    }

		else {
  	  printf("Guess again\r\n");
    }
    int c;
   	while ( (c = getchar()) != '\n' && c != EOF ) { }
	}
}
