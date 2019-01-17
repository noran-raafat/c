# include <stdio.h>

void main(void)
{
/*
	 C Program to Check Whether a Number is Prime or Not
*/
	int num;
	int i;
	printf("Please write a number");
	scanf("%d",&num);
	
	i = 2; 
	while (i <= (num/2))
	{
		if ((num % i) == 0)
		{
			printf("Not a prime number");
			break; 
		}
		else
			 i++;
	
	 }
	if (i > (num/2) )
	{
	printf(" prime number");
	}
}
