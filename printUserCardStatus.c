
#define N_MAX_CARDHOLD		10
#define N_MAX_USER			5

extern n_user;
extern int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];
extern getaction;

int printUserCardStatus(){
	
	int i;
	int j=2;
	
	printf(" --> card : ");
	
	mixCardTray();
	
	for(i=0; i<j; i++)
	{
		printf("%d ", cardhold[i+1][i]);
	}
}
