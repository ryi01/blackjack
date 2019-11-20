#include <stdio.h>
#include <stdlib.h>

//print the card information (e.g. DiaA)
void printCard() {
	
	int i;
	
	if(0<i&&i<10)
	{
		printf("Spade %d", i+1);
	}
	else if(i==0)
	{
		printf("Spade A");
	}
	else if(i==10)
	{
		printf("Spade Jack");
	}
	else if(i==11)
	{
		printf("Spade Queen");
	}
	else if(i==12)
	{
		printf("Spade King");
	}
	else if(13<i&&i<23)
	{
		printf("Heart %d", i-12);
	}
	else if(i==13)
	{
		printf("Heart A");
	}
	else if(i==23)
	{
		printf("Heart Jack");
	}
	else if(i==24)
	{
		printf("Heart Queen");
	}
	else if(i==25)
	{
		printf("Heart King");
	}
	else if(26<i&&i<36)
	{
		printf("Club %d", i-24);
	}
	else if(i==26)
	{
		printf("Club A");
	}
	else if(i==36)
	{
		printf("Club Jack");
	}
	else if(i==37)
	{
		printf("Club Queen");
	}
	else if(i==38)
	{
		printf("Club King");
	}
	else if(39<i&&i<49)
	{
		printf("Dia %d", i-38);
	}
	else if(i==39)
	{
		printf("Dia A");
	}
	else if(i==49)
	{
		printf("Dia Jack");
	}
	else if(i==50)
	{
		printf("Dia Queen");
	}
	else if(i==51)
	{
		printf("Dia King");
	}
	
	
}

