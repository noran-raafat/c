#include <stdio.h>

/* 
C Program to Check Whether a Number can be Expressed as Sum of Two Prime Numbers.
*/
 char prime_or_not(int num)
{
/* 
	A function to check if a number is prime or not
*/
	int f;
	
	f = 2; 
	while (f <= (num/2))
	{
		if ((num % f) == 0)
		{
			return 0;
			break; 
		}
		else
			 f++;
	
	 }
	if (f > (num/2) )
	{
	return 1;
	}

}

void main (void)
{
	char q;
	int n, i; 
	printf("Please enter a number ");
	scanf("%d",&n);
	for (i=2 ; i <= (n/2) ; i++)
	{
		q = prime_or_not(i);
		if (q)
		{
			q = prime_or_not(n-i);
			if (q)
			{
				printf("Number can be expressesd as sum of two prime numbers: %d + %d ", i, n-i );
				break;
			}
		}
	}
	if (i > (n/2) )
	{
		printf("Number can't be expressed as sum of two prime numbers");
	}
}