#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastDigit;
	const char* info;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* to get the last digit */
	 lastDigit = n % 10;
	if(lastDigit ==0){
	  info = "and is 0";
	}else if(lastDigit >5){
	   info = "and is greater than 5";
	}else if(lastDigit < 6){
	    info = "and is less than 6 and not 0";
	}  
	printf("Last digit of %d is %d %s\n", n, lastDigit, info);

	return (0);
}
