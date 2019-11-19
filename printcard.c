#include <stdio.h>
#include <stdlib.h>

//print the card information (e.g. DiaA)
void printCard(int cardnum) {
	
	int i, j;
	int card;
	
	if(0<cardnum&&cardnum<10)
	{
		printf("Spade %d", cardnum);
	}
	else if(cardnum==0)
	{
		printf("Spade A");
	}
	else if(cardnum==10)
	{
		printf("Spade J");
	}
	else if(cardnum==11)
	{
		printf("Spade Q");
	}
	else if(cardnum==12)
	{
		printf("Spade K");
	}
	else if(13<cardnum&&cardnum<23)
	{
		printf("Heart %d", cardnum-12);
	}
	else if(cardnum==13)
	{
		printf("Heart A");
	}
	else if(cardnum==23)
	{
		printf("Heart J");
	}
	else if(cardnum==24)
	{
		printf("Heart Q");
	}
	else if(cardnum==25)
	{
		printf("Heart K");
	}
	
	else if(26<cardnum&&cardnum<36)
	{
		printf("Club %d", cardnum-25);
	}
	else if(cardnum==26)
	{
		printf("Club A");
	}
	else if(cardnum==36)
	{
		printf("Club J");
	}
	else if(cardnum==37)
	{
		printf("Club Q");
	}
	else if(cardnum==38)
	{
		printf("Club K");
	}
	else if(39<cardnum&&cardnum<49)
	{
		printf("Dia %d", cardnum-38);
	}
	else if(cardnum==39)
	{
		printf("Dia A");
	}
	else if(cardnum==49)
	{
		printf("Dia J");
	}
	else if(cardnum==50)
	{
		printf("Dia Q");
	}
	else if(cardnum==51)
	{
		printf("Dia K");
	}
}

