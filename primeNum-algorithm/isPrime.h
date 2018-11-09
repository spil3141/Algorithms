int isPrime(int num){
	int i;
	int count = 0;
	if(num == 1)
		return 0;
	if ( (num % 1) == 0)
		count++;
	for(i=1;i<= num ;i++){
		if(( num % i) == 0 && i != num){
			count++;
		}
	}
	return (count ==2) ? 1: 0;

}
