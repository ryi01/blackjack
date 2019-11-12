#include <stdio.h>
#include <stdlib.h>

//print the card information (e.g. DiaA)
void printCard(int cardnum) {
	
	int i, j;
	int card[4][13];
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<13; j++)
		{
			switch(i)
			{
				case 0 :
					printf("spade");
				break;
				
				case 1 :
					printf("heart");
				break;
				
				case 2 :
					printf("club");
				break;
				
				default :
					printf("dia");
				break;
			}
			
			switch(j)
			{
				case 0 :
					printf("A");
				break;
				
				case 10 :
					printf("jack");
				break;
				
				case 11 :
					printf("queen");
				break;
				
				case 12 :
					printf("king");
				break;
				
				default :
					printf("%d", j);
				break;
			}
		}
	}
	
	return card[i][j];
	
}

