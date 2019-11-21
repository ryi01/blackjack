#include <stdio.h>
#include <stdlib.h>

#define N_CARDSET			1
#define N_CARD				52
#define N_DOLLAR			50


#define N_MAX_CARDNUM		13
#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_MAX_GO			17
#define N_MAX_BET			5

#define N_MIN_ENDCARD		30


//card tray object
int CardTray[N_CARDSET*N_CARD];
int cardIndex = 0;							


//player info
int dollar[N_MAX_USER];						//dollars that each player has
int n_user;									//number of users


//play yard information
int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];	//cards that currently the players hold
int cardSum[N_MAX_USER];					//sum of the cards
int bet[N_MAX_USER];						//current betting 
int gameEnd = 0; 							//game end flag
int getaction =0;                           //player's getaction num
//some utility functions

//get an integer input from standard input (keyboard)
//return : input integer value
//         (-1 is returned if keyboard input was not integer)
int getIntegerInput(void) {
    int input, num;
    
    num = scanf("%d", &input);
    fflush(stdin);
    if (num != 1) //if it fails to get integer
        input = -1;
    
    return input;
}
//playing game functions -----------------------------

//player settiing
int configUser(void) {
 
	do{
		printf("Input the number of players (max :5) :");
		n_user = getIntegerInput();
		if(n_user<0)
		{
			printf("put the number of players!!!");
		}
		else if(n_user>N_MAX_USER)
		{
			printf("too many players!!");
		}
	}while(n_user<0||n_user>N_MAX_USER);
	
	printf("--> card is mixed and put into the tray\n\n");
}


//betting
int betDollar(void) {
	
	int i;
	int betting;
	
	while(betting<0||betting>dollar[0])
	{
		printf("your betting (total : %d) :", dollar[0]);
    	betting = getIntegerInput();
    
   	 	if(betting>dollar[0])
    	{
   			printf("You only have %d\n", dollar[0]);
		}
		else if(betting < 0)
		{
			printf("Input betting!\n");
		}
	}
	bet[0]=betting;
	
	for(i=0; i<n_user-1; i++)//not include you
	{
		
		bet[i+1]=rand()%5+1;//player bet
		
		printf("player %d : $%d\n", i+1, bet[i+1]);
	}
	
	return bet[i];
}


int main(int argc, char *argv[]) {
	int roundIndex = 0;
	int i=0;
	int j=2;
	int gameend=0;//players and dealer turn
	int Go;
	
	srand((unsigned)time(NULL));
	
	//set the number of players
	configUser();


	//Game initialization --------
	//1. players' dollar
	for(i=0; i<n_user; i++)
	{
		dollar[i]=50;
	}
	//2. card tray
	

	//Game start --------
	do {
		printf("----------------------------------------\n");
		printf("----------Round %d (cardIndex : %d)----------", roundIndex+1, cardIndex);
		printf("----------------------------------------\n\n");
		
		printf("---------- BETTING STEP ----------\n");
		printf("----------------------------------------\n");
		
		betDollar();
		
		printf("----------------------------------------\n\n");
		
		printf("-------- CARD OFFERING ---------\n");
		
		printCardInitialStatus();
		
		printf("----------------------------------------\n");
		
		printf("\n------------------ GAME start --------------------------\n");
		
		printf(">>> YOUR TURN! ------\n");//your turn
		
				printf(" --> card : %d %d           ", printCard(cardhold[0][0]), printCard(cardhold[0][1])); //your initial status
		
		do{
			printf(":::Action? (0 - go, others - stop) :");//your getaction
			Go = getIntegerInput();
		
			if(Go==0)
			{
				cardhold[0][j]=mixCardTray();
				j++;
			}
			else if(Go!=0)
			{
				break;
			}
			printf(" --> card : ");
			
			for(i=0; i<j; i++)
			{
				printf("%d ", cardhold[0][i]);
			}
			
			if(cardIndex>52)
			{
				printf("card ran out of the tray!! finishing the game...");
				gameEnd==1;
				break;
			}		
			
		}while(Go==0);
		
		printf("\n");
		//each player's turn
		for(i=1; i<(n_user); i++) //each player
		{
			printf(">>> Player %d TURN! ------ \n", i);
			
			do //do until the player dies or player says stop
			{
				printUserCardStatus(); //print current card status printUserCardStatus();
				getAction();//GO? STOP? ::: getAction()
				calcStepResult(); //check the card status ::: calcStepResult()
				
			}while(gameend=0);
		}
		
		gameend = 0;
		
		printf(">>> Dealer TURN! ------\n");//dealer turn
		
		do{
			printUserCardStatus();
			getAction();
			calcStepResult();
			
			if(cardSum[n_user]<21)
			{
				printf("[Dealer result is ....%d]", cardSum[n_user]);
				gameend=1;
			}
			else if(cardSum[n_user]==21)
			{
				printf("\n :::BLACK JACK!!....Dealer win!");
				printf("[Dealer result is ....BLACK JACK!!]");
				gameend = 1;
			}
			else if(cardSum[n_user]>21)
			{
				printf("\n :::DEAD(sum : %d)", cardSum[n_user]);
				printf("[Dealer result is ....overflow!!]");
				gameend = 1;
			}
			
			if(cardIndex > 52)
			{
				printf("card ran out of the tray!! finishing the game...");
				gameend==1;
				gameEnd=1;
			}
			
		}while(gameend=0);
		
		//result
		printf("\n\n----------Round %d result\n", roundIndex+1);
		checkResult();
		roundIndex++;
		
	} while (gameEnd == 0);
	
	checkWinner();
	
	
	return 0;
}
