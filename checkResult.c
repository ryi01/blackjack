

int checkResult(){
	
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
