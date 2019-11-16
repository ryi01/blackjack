#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_CARDSET			1
#define N_CARD				52

extern int CardTray[N_CARDSET*N_CARD];
extern int cardIndex = 0;		
	
//mix the card sets and put in the array
int mixCardTray(){
	
	int i, j;
	int card[i][j];
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<13; j++)
		{
			cardIndex = (rand()%52)+1;
			
			if(CardTray[cardIndex]==0){
				card[i][j]=cardIndex;
				CardTray[cardIndex] = 1;
			}
			
			else{
				j--;
			}
		}
 	}
 	
 	return card[i][j];

}
