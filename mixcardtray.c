#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_CARDSET			1
#define N_CARD				52

extern int CardTray[N_CARDSET*N_CARD];
extern int cardIndex = 0;		
	
//mix the card sets and put in the array
int mixCardTray(){
	
	int i, j, k;
	int card[i];
	
	for(i=0;i<N_card;i++)
	{
		card[i]=rand()%52;
		
		for(j=0; j<i; j++){
			
			if(card[j]==card[i])
			{
				i--;
				break;
			}
		}
		cardIndex++;
	}
 	
 	return;

}
