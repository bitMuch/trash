#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int dice (void) {
  srand (time(NULL));
	int r;
	r = rand() % 6;
	r += 1;
	return (r);
}
