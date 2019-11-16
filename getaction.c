#include <stdio.h>
#include <stdlib.h>

#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_MAX_GO			17

extern cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];
int getAction(){
	
	int i;
	
	do{
		printf(":::Action? (0 - go, others - stop) :");
		action = getIntegerInput();
		
	}while(action!=0)
	
	
}
