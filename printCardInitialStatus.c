#include <stdio.h>
#include <stdlib.h>

#define N_MAX_CARDHOLD		10
#define N_MAX_USER			5

extern n_user;
extern int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];
//print initial card status
void printCardInitialStatus(void) {
	
	int i;
	
	offerCards();

	printf("-->> Server : X %d\n", cardhold[n_user][1]);
	
	printf("-->> Your   : %d %d\n", cardhold[0][0], cardhold[0][1]);
	
	for(i=0; i<n_user-1; i++)
	{
		printf("-->> Player %d : %d %d\n", i+1, cardhold[i+1][0], cardhold[i+1][1]);
	 } 
	 
}
