//calculate the actual card number in the blackjack game
int getCardNum(int cardnum) {
	
	int i;//들어온 숫자 
	
	if(i==10||i==11||i==12)
	{
		cardnum=10;
	}
	else if(i==0)//A가 들어갈 경우 
	{
		cardnum=11;
	}
	
	return cardnum;
}
