extern int cardSum[N_MAX_USER];					//sum of the cards
extern int gameEnd = 0;

//calculate the actual card number in the blackjack game
int getCardNum(int cardnum) {
	
	int i; 
	
	offerCards();
	
	if(i==10||i==11||i==12)
	{
		cardnum=10;
	}
	else if(i==0)//A가 들어갈 경우 
	{
		cardnum=11;
	}
	else if(i!=0||i!=10||i!=11||i!=12)
	{
		cardnum=i;
	}
	return cardnum;
} 

int calcStepResult(){
	
	int i, j;
	
	do{
		for(i=0; i<Go; i++)
		{
			cardSum[0]+=cardnum;
		}
		
		for(j=0; j<n_user; j++)
		{
			for(i=1; i<Go; i++)
				{
					cardSum[j+1]+=cardnum;
				}
		}
	}while()
	
	for(i=0; i<Go; i++)//your card sum
	{
		cardSum[0]+=cardnum;
	}
	
	for(j=0; j<n_user; j++)
	{
		for(i=1; i<Go; i++)
		{
			cardSum[j+1]+=cardnum;
		}
	}

	if(cardSum[j]==21)
	{
		bet[j]=dollar[j]+2*bet[i];
		printf(":::BLACK JACK!! --> 2 x %d ($%d)", bet[i], bet[j]);
	}
	else if(cardSum[j]>21)
	{
		bet[j]=dollar[j]-bet[i];
		printf(":::DEAD(sum : %d) --> -%d ($%d) ", cardSum[0], bet[i], bet[j]);
	}
}
