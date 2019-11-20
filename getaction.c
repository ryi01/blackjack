#include <stdio.h>
#include <stdlib.h>

#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_MAX_GO			17

extern int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];
extern int getaction;
extern int dollar[N_MAX_USER];
extern int bet[N_MAX_USER];	

int getAction(){
	
	int i, j;
	int cardSum[i];
	
	do{
		
		if(cardSum[i]<17)
		{
			printf("::: GO!! \n");
			cardhold[i][j+2]=mixCardTray();
			j++;
			return;
		}
		else if(cardSum[i]>17)
		{
			printf("::: STAY!! \n");
			break;
		}
		printf(" --> card : ");
			
		for(i=0; i<j; i++)
		{
			printf("%d ", cardhold[i][j]);
		}
		
		if(cardSum[i]>21)
		{
			dollar[i]-=bet[i];
			printf("::: DEAD  (sum : %d) --> -$%d (%d)\n", cardSum[i], bet[i], dollar[i]);
			break;
		}
		else if(cardSum[i]==21)
		{
			dollar[i]=2*bet[i];
			printf("::: BLACK JACK!!!-\n", cardSum[i], bet[i], dollar[i]);
			break;
		}		
			
	}while(cardSum[i]<17);
}
