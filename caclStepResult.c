#define N_MAX_GO			17

#define N_MAX_CARDHOLD		10
#define N_MAX_USER			5

extern int cardSum[N_MAX_USER];					//sum of the cards
extern int n_user;
extern int bet[N_MAX_USER];
extern int dollar[N_MAX_USER];	
extern int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];
//calculate the actual card number in the blackjack game
int getCardNum() {
	
	int i;
	int cardnum=0;
	
	offerCards();
	
	if(10<=i&&i<=12)//spade j ~ k
	{
		cardnum = 10;
	}
	else if(0<i&&i<10)
	{
		cardnum = i;
	}
	else if(23<=i&&i<=25)//heart j~k
	{
		cardnum = 10;
	}
	else if(13<i&&i<23)
	{
		cardnum = i-12;
	}
	else if(36<=i&&i<=38)//club j~k
	{
		cardnum = 10;
	}
	else if(26<i&&i<36)
	{
		cardnum = i-24;
	}
	else if(49<=i&&i<=51)//dia j~k
	{
		cardnum = 10;
	}
	else if(39<i&&i<49)
	{
		cardnum = i-38;
	}
	else if(i==0||i==13||i == 26||i==39)//case : Ace
	{
		cardnum = 11;
	}
	
	return cardnum;
} 

int calcStepResult(){
	
	int i, j;
	int cardnum;
	int cardSum[N_MAX_USER];
	
	getCardNum();
	offerCards();
	
	for(i=0; i<=n_user; i++)
	{
		cardSum[i] = cardhold[i][0]+cardhold[i][1];
		
		for(j=0; j<N_MAX_GO; j++)
		{
			cardSum[i]=cardSum[i]+getCardNum(cardhold[i][j]);
		
			if(cardSum[i]>21 && getCardNum(cardhold[i][j])==11)
			{
				cardSum[i]=cardSum[i]-10;
				return;
			}
	
		}
	}
}
