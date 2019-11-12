#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_CARDSET			1
#define N_CARD				52

//mix the card sets and put in the array
int mixCardTray(){
	
	int i, j;
	int CardTray[N_CARDSET*N_CARD];
	
	for(i=0; i<N_CARD; i++)
	{
		CardTray[i] = rand()%52+1;
		
		for(j=0; j<i; j++)
		{
			if(CardTray[j] == CardTray[i])//prevent duplication
			{
				break;
				}
		}
	}
	
	return CardTray[i];
}
