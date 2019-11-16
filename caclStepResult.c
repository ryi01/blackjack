extern int cardSum[N_MAX_USER];					//sum of the cards

int calcStepResult(){
	
	int i, j;
	offerCards();
	
	for(i=0; i<Go; i++)
	{
		cardSum[0]+=cardhold[i]
	}
	
	for(j=0; j<n_user; j++)
	{
		for(i=1; i<Go; i++)
		{
			cardSum[j+1]+=cardSum[j][i];
		}
	}
	
	if(cardSum[j]==21)
	{
		bet[j]+=dollar[j];
	}
	else if(cardSum[j-1]<cardSum[n_user])
	{
		bet[j]-=dollar[j];
	}
	else if(cardSum[j-1]>cardSum[n_user])
	{
		bet[j]+=dollar[j];
	}
}
