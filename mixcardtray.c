#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_CARDSET			1
#define N_CARD				52

extern int CardTray[N_CARDSET*N_CARD];		
extern int n_user;
extern int cardIndex;
	
//mix the card sets and put in the array
int mixCardTray(){
	
	int i, j;
	int card;

	srand((unsigned)time(NULL));
	
	for(i=0;i<N_CARD;i++)
	{
		j = rand()%52;
		
		card = CardTray[i];
		CardTray[i]=CardTray[j];
		CardTray[j]=card;
	}
}
