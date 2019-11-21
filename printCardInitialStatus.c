#include <stdio.h>
#include <stdlib.h>

#define N_MAX_CARDHOLD		10
#define N_MAX_USER			5

extern n_user;
extern int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];
//print initial card status
void printCardInitialStatus(void) {
	
	int i, j;
	
	offerCards();

	printf("-->> Server : X ");
	printf("%d", printCard(cardhold[n_user][1]));
	
	printf("\n-->> Your   : ");
	for(i=0;i<2;i++)
	{
		printf("%d ", printCard(cardhold[0][i]));
	}
	
	for(i=0; i<n_user-1; i++)
	{
		printf("\n-->> Player %d : ", i+1);
		for(j=0;j<2;j++)
		{
			printf("%d ", printCard(cardhold[0][j]));
		}
	}
	printf("\n");
	 
}
