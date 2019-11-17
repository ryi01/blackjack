

int printUserCardStatus(){
	
	printCardInitialStatus();
	
	printf(">>> your turn! ------\n");
	printf("-> card : %d %d\n ", cardhold[0][0],cardhold[0][1]);
	
	getAction();
	
	do{
		printf(">>> player %d turn!", n_user+1);
		printf("-> card : %d %d\n")
	}
}
