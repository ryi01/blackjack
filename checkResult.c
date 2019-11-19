#define N_MAX_USER			5

extern int n_user;
extern int cardSum[N_MAX_USER];
extern int bet[N_MAX_USER];
extern int dollar[N_MAX_USER];

int checkResult(){
	
	int i;
	
	if(cardSum[0]<cardSum[n_user])
	{
		printf(" --> You result : lose!! (sum : %d) ---> $%d\n", cardSum[0], dollar[0]);
	}
	else if(cardSum[0]>cardSum[n_user])
	{
		printf(" --> You result : Win!! (sum : %d) ---> $%d\n", cardSum[0], dollar[0]);
	}
	else if(cardSum[0]>21)
	{
		printf(" --> You result : Overflow!! (sum : %d) ---> $%d\n", cardSum[0], dollar[0]);
	}
	
	for(i=1; i<n_user; i++)
	{
		if(cardSum[i]<cardSum[n_user])
		{
			printf(" --> You result : lose!! (sum : %d) ---> $%d\n", cardSum[i], dollar[i]);
		}
		else if(cardSum[i]>cardSum[n_user])
		{
			printf(" --> You result : Win!! (sum : %d) ---> $%d\n", cardSum[i], dollar[i]);
		}
		else if(cardSum[i]>21)
		{
			printf(" --> You result : Overflow!! (sum : %d) ---> $%d\n", cardSum[i], dollar[i]);
		}
	}
	
}
