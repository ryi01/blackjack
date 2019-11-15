#include <stdio.h>
#include <stdlib.h>

extern n_user;
//print initial card status
void printCardInitialStatus(void) {
	
	int i, j;
	
	j = offerCards();
	printCard(j);
	
	printf("delear's card : %d X\n", printCard(j));
	
	printf("Your card : %d\n")
	
	for(i=0; i<n_user-1; i++)
	{
		printf("player %d's card : %d %d\n", n_user+1, printcard(j), );
		// modification 
	 } 
}
