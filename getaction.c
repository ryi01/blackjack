#include <stdio.h>
#include <stdlib.h>

#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_MAX_GO			17

extern int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];
extern int getaction;
extern int dollar[N_MAX_USER];
extern int bet[N_MAX_USER];	
extern int n_user;

int getAction(){
	
	int i;
	int j=2;
	int cardSum[i];
	
	calcStepResult();
	offerCards();
	
	do{
		
		printf("           ::: GO!! \n");
		
		cardhold[i][j] = mixCardTray();
		j++;
			
		printf(" --> card : ");
			
		for(i=0; i<j; i++)
		{
			printf("%d ", cardhold[i][j]);
		}
			
	}while(cardSum[i]<17);
	
	if(cardSum[i]>17)
	{
		printf("           ::: STAY!! \n");
		printf("\n\n");
	}
		
	else if(cardSum[i]>21)
	{
		dollar[i]=dollar[i] - bet[i];
		printf("           ::: DEAD  (sum : %d) --> -$%d (%d)\n", cardSum[i], bet[i], dollar[i]);
		printf("\n\n");
	}
	else if(cardSum[i]==21)
	{
		dollar[i] = dollar[i] + 2*bet[i];
		printf("           ::: BLACK JACK!!!-%d (%d)\n", cardSum[i], bet[i], dollar[i]);
		printf("\n\n");
	}	
	if(cardSum[n_user]>17)
	{
		printf("[[ Dealer result is %d.....]]", cardSum[n_user]);
	}
}
