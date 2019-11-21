
#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_CARDSET			1
#define N_CARD				52

extern int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];
extern int CardTray[N_CARDSET*N_CARD];
extern int n_user;
extern int cardIndex;

int pullcard(){
	
	int i;
	
	i = mixCardTray();
	
	return i; 
}
//offering initial 2 cards
void offerCards(void) {
	
	int i;

	//1. give two card for each players
	for (i=0;i<n_user;i++)
	{
		cardhold[i][0] = pullcard();
		cardhold[i][1] = pullcard();
	}
	//2. give two card for the operator
	cardhold[n_user][0] = pullcard();
	cardhold[n_user][1] = pullcard();
	
}

