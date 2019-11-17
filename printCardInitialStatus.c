#include <stdio.h>
#include <stdlib.h>

extern n_user;
//print initial card status
void printCardInitialStatus(void) {
	
	int i, j;
	mixCardTray();
	prinCard();
	
	printf("--------CARD OFFERING--------\n")

	printf("-->> Server : X %d\n", cardhold[n_user][0]);
	
	printf("-->> Your : %d %d\n", cardhold[0][0], cardhold[0][1])
	
	for(i=0; i<n_user; i++)
	{
		printf("-->> Player %d : %d %d\n", i+1, cardhold[i+1][0], cardhold[i+1][1]);
		// modification 
	 } 
}
