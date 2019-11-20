#include <stdio.h>
#include <stdlib.h>

#define N_MAX_CARDHOLD		10
#define N_MAX_USER			5

extern n_user;
extern int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];
//print initial card status
void printCardInitialStatus(void) {
	
	int i, cardnum;
	
	printCard();

	printf("-->> Server : X %d\n", printCard(cardhold[n_user][1]));
	
	printf("-->> Your : %d %d\n", printCard(cardhold[0][0]), printCard(cardhold[0][1]));
	
	for(i=0; i<n_user; i++)
	{
		printf("-->> Player %d : %d %d\n", i+1, printCard(cardhold[i+1][1]), printCard(cardhold[i+1][1]));
	 } 
	 
}
