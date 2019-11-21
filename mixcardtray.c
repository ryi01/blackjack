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
	
	srand((unsigned)time(NULL));
	
	for(i=0; i<N_CARD; i++)
	{
		CardTray[i]=rand()%52;
		for(j=0; j<i; j++)
		{
			if(CardTray[i]==CardTray[j])
			{
				i--;
				break;
			}
	 }
	}
	return CardTray[i];
}
