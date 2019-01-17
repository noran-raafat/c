# include <stdio.h>

void main(void)
{
/*
	 C Program to Check Whether a Number is Prime or Not
*/
	int num;
	int f;
	printf("Please write a number");
	scanf("%d",&num);
	
	f = 2; 
	while (f <= (num/2))
	{
		if ((num % f) == 0)
		{
			printf("Not a prime number");
			break; 
		}
		else
			 f++;
	
	 }
	if (f > (num/2) )
	{
	printf(" prime number");
	}
}
