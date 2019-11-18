#include <stdio.h>
#include <stdlib.h>

extern n_user;
//print initial card status
void printCardInitialStatus(void) {
	
	int i, j;
	offerCards();
	prinCard(cardhold[i][j]);
	
	printf("--------CARD OFFERING--------\n")

	printf("-->> Server : X %d\n", printCard(cardhold[n_user][0]));
	
	printf("-->> Your : %d %d\n", printcard(cardhold[0][0]), printcard(cardhold[0][1]));
	
	for(i=0; i<n_user; i++)
	{
		printf("-->> Player %d : %d %d\n", i+1, printcard(cardhold[i+1][0]), printcard(cardhold[][1]);
		// modification 
	 } 
}
