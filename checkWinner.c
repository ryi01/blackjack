#define N_DOLLAR			50
#define N_MAX_USER			5

extern int dollar[N_MAX_USER];
extern int n_user;

int checkWinner(){
	
	int i;
	int max = 0;
	
	printf("----------------------------------------\n\n");
	printf("----------------------------------------\n\n");
	printf("----------------------------------------");
	printf("game end!\n Your money : $%d\n", dollar[0]);
	
	for(i=1; i<n_user; i++)
	{
		printf("Player %d money : %d\n", i, dollar[i]);
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
	else if(max!=dollar[0])
	{
		printf("Winner is Player %d!!\n", i);
	}
}
