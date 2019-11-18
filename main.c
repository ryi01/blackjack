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
	
	printf("--> card is mixed and put into the tray");
	
	return;
}


//betting
int betDollar(void) {
	
	int betting;
	int i;
	
	
	do{
		printf("your betting (total : %d) :", dollar[0]);
    	betting = getIntegerInput();
    
   		 if(betting>dollar[0])
    	{
    		printf("You only have %d\n", dollar[0] );
		}
		else(betting<dollar[0])
		{
			printf("Input betting!\n")
		}
		
		bet[0]=betting;
		
	}while(betting<0||betting>dollar[0]);
	
	for(i=0; i<(n_user-1); i++)//not include you
	{
		i = rand()%N_MAX_BET+1;
		printf("player %d : $%d\n", n_user+1, bet[n_user+1]);
		bet[n_user+1]=i;//player bet
	}
	
	
	return;
}


int main(int argc, char *argv[]) {
	int roundIndex = 0;
	int max_user;
	int i;
	
	srand((unsigned)time(NULL));
	
	//set the number of players
	configUser();


	//Game initialization --------
	//1. players' dollar
	for(i=0; i<max_user; i++)
	{
		dollar[i]=50;
	}
	
	//2. card tray
	mixCardTray();



	//Game start --------
	do {
		
		printf("----------Round %d (cardIndex : %d)----------", roundIndex+1, cardIndex);
		
		printf("---------- BETTING STEP ----------");
		betDollar();
		
		offerCards(); //1. give cards to all the players
		
		printCardInitialStatus();
		printf("\n------------------ GAME start --------------------------\n");
		
		printf(">>> YOUR TURN! ------\n");//your turn
		
		do{
			
			printf(" --> card %d \n", )
			printf(":::Action? (0 - go, others - stop) :");
			Go = getIntegerInput();
		
			if(Go==0)
			{
				cardhold[0][i]=mixCardTray();
			}
			i++;
		}while(Go!=0)
		
		//each player's turn
		for (i=0; i<(n_user); i++) //each player
		{
			while () //do until the player dies or player says stop
			{
				//print current card status printUserCardStatus();
				//check the card status ::: calcStepResult()
				//GO? STOP? ::: getAction()
				//check if the turn ends or not
			}
		}
		
		//result
		printf("----------Round %d result", roundindex);
		checkResult();
		roundIndex++;
		
	} while (gameEnd == 0);
	
	checkWinner();
	
	
	return 0;
}
