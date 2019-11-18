#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];
extern int CardTray[N_CARDSET*N_CARD];

//get one card from the tray
int pullCard(void) {
	
	int i;
	
	for(i=0;i<1;i++)
	{
		mixCardTray(i);
	}
}

//offering initial 2 cards
void offerCards(void) {
	int i;
	//1. give two card for each players
	for (i=0;i<n_user;i++)
	{
		cardhold[i][0] = pullCard();
		cardhold[i][1] = pullCard();
	}
	//2. give two card for the operator
	cardhold[n_user][0] = pullCard();
	cardhold[n_user][1] = pullCard();
	
	return;
}

