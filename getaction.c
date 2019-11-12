#include <stdio.h>
#include <stdlib.h>

int getAction(){
	
	printf("::: Action? (0 - go, others - stop) : ");
	action = getIntegerInput();
	
	if(action==0)
	{
		mixCardTray();
	}
	els if(action!=0)
	{
		return 0;
	}
}
