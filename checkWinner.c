#define N_DOLLAR			50
#define N_MAX_USER			5

extern int dollar[N_MAX_USER];
extern int n_user;

int checkWinner(){
	
	int i;
	int max = 0;
	
	printf("----------------------------------------\n\n");
	printf("----------------------------------------\n\n");
	printf("------------------ GAME END! ------------------");
	printf("\n\n Your money : $%d\n", dollar[0]);
	
	for(i=0; i<n_user-1; i++)
	{
		printf("Player %d money : %d\n", i+1, dollar[i+1]);
	}
	
	for(i=0; i<n_user; i++)
	{
		if(max<dollar[i])
		{
			max=dollar[i];
		}
	}
	
	if(max==dollar[0])
	{
		printf("Winner is you!!\n");
	}
	else if(max==dollar[1])
	{
		printf("Winner is Player 1!!\n");
	}
	else if(max==dollar[2])
	{
		printf("Winner is Player 2!!\n");
	}
	else if(max==dollar[3])
	{
		printf("Winner is Player 3!!\n", 3);
		
	}
	else if(max==dollar[4])
	{
		printf("Winner is Player %d!!\n", 4);
	}
	
}
