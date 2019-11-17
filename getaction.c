#include <stdio.h>
#include <stdlib.h>

#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_MAX_GO			17

extern cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];
int getAction(){
	
	int i;
	int Go;
	
	do{
		
		printf(":::Action? (0 - go, others - stop) :");
		Go = getIntegerInput();
		
	}while(Go!=0)
	
	if(Go!=0)
	{
		mixCardTray();
		printcard();
	}
}
