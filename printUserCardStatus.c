
#define N_MAX_CARDHOLD		10
#define N_MAX_USER			5

extern n_user;
extern int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];

int printUserCardStatus(int i){
	
	int j;
	
	offerCards();
	
	printf(" --> card :");
	
	for(i=0; i<j; i++)
	{
		printf("%d ", printCard(cardhold[i+1][i]));
	}
}
