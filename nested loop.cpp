#include <stdio.h>
int main (void) {
// Local Declarations
	int loopCount;
	// Statements
	loopCount = 5;
	printf("while loop : ");
	while (loopCount != 0){
		printf ("%3d", loopCount--);
		printf("\n\n");
		for(int i=5; i>0 ;i--){
			printf("%3d", i);
		}

	}

	return 0;
} // main
