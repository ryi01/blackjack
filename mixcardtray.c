#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_CARDSET			1
#define N_CARD				52

extern int CardTray[N_CARDSET*N_CARD];
extern int cardIndex;		
extern int n_user;
	
//mix the card sets and put in the array
int mixCardTray(){
	
	int i, j;
	int card;
	int cards[i][j];
	
	for(i=0; i<4; i++){
		for(j=0; j<13; j++)
		{
			card = rand()%52;
			if(CardTray[card]==0)
			{
				cards[i][j]=card;
				CardTray[card]=1;
			}
			else
			{
				j--;
			}
		}
		cardIndex++;
	}
	
	return cards[i][j];
}
