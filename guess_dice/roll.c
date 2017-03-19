
#include <stdio.h>
#include "dice.h"

int main () {
	
	while (1) {
	  int guess;
    printf("What number will I roll?: ");
		scanf("%d", &guess);
	  int roll;
	  roll = dice();

    if(guess==roll) {
		  printf("Hey, you guessed right!\r\n");
	  }

		else {
		  printf("Guess again\r\n");
	  }
  }
}
