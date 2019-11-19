#include <stdio.h>
#include <stdlib.h>

#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_MAX_GO			17

extern cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];

int getAction(){
	
	int i = 0;
	int cardSum[i];
	
	calcStepResult();
	
	if(cardSum[i]<17)
	{
		cardhold[i][i+2] = mixCardTray();
		i++;
	}
	else if(cardSum[i]>17)
	{
		return;
	}
}
