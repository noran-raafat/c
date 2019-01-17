#include <stdio.h>


void main (void)
{	
/*
	Write C Program to Display Fibonacci Sequence of first n numbers entered by user
*/
	int n, i;
	int ans = 0;

	/* Last two numbers */
	int lastans = 1;     
	int last_lastans = 0;    

	printf("Please enter an integer number ");
	scanf("%d",&n);   /* Number entered by user */
	
	if (n <= 0)
	{ 
	printf("Please enter a number bigger than zero ");
	scanf("%d",&n);
	}
	
	for (i=1; i<=n; i++)
	{
	printf("%d, ", ans);
	last_lastans = lastans;
	lastans = ans;
	ans=lastans + last_lastans;
	}
		
}