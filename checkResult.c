#define N_MAX_USER			5

extern int n_user;
extern int cardSum[N_MAX_USER];
extern int bet[N_MAX_USER];
extern int dollar[N_MAX_USER];

int checkResult(){
	
	int i;
	
	if(cardSum[0]<cardSum[n_user])
	{
		dollar[0]=dollar[0] - bet[0];
		printf(" --> You result : lose!! (sum : %d) ---> $%d\n", cardSum[0], dollar[0]);
	}
	else if(cardSum[0]>cardSum[n_user])
	{
		dollar[0] = dollar[0] + bet[0];
		printf(" --> You result : Win!! (sum : %d) ---> $%d\n", cardSum[0], dollar[0]);
	}
	else if(cardSum[0]>21)
	{
		dollar[0] = dollar[0] - bet[0];
		printf(" --> You result : Overflow!! (sum : %d) ---> $%d\n", cardSum[0], dollar[0]);
	}
	
	for(i=0; i<n_user; i++)
	{
		if(cardSum[i+1]<cardSum[n_user])
		{
			dollar[i+1]=dollar[i+1] - bet[i+1];
			printf(" --> Player %d result : lose!! (sum : %d) ---> $%d\n", i+1, cardSum[i+1], dollar[i+1]);
		}
		else if(cardSum[i]>cardSum[n_user])
		{
			dollar[i]=dollar[i] - bet[i];
			printf(" --> Player %d : Win!! (sum : %d) ---> $%d\n", i+1, cardSum[i+1], dollar[i+1]);
		}
		else if(cardSum[i]>21)
		{
			dollar[i]=dollar[i] - bet[i];
			printf(" --> Player %d : Overflow!! (sum : %d) ---> $%d\n", i+1, cardSum[i+1], dollar[i+1]);
		}
	}
	
}
