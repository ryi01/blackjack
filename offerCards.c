#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_CARDSET			1
#define N_CARD				52

extern int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];
extern int CardTray[N_CARDSET*N_CARD];

//get one card from the tray
int pullCard(void) {

	mixCardTray();
}

//offering initial 2 cards
void offerCards(void) {
	int i;
	int n_user;
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

