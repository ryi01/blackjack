//calculate the actual card number in the blackjack game
int getCardNum(int cardnum) {
	
	int i;//���� ���� 
	
	if(i==10||i==11||i==12)
	{
		cardnum=10;
	}
	else if(i==0)//A�� �� ��� 
	{
		cardnum=11;
	}
	
	return cardnum;
}
