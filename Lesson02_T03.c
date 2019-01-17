# include <stdio.h>

void main(void)
{
/*
	 C Program to Calculate the Sum of Natural Numbers from 1 to n (entered by the user)
*/
	int n;
	int sum = 0;
	int i;
	printf("Please enter a natural number ");
	scanf("%d", &n);
	
	if (n <= 0)
	{
		printf("This is not a natural number. Please try again ");
		scanf("%d",&n);
	}
	
	for (i=1 ; i <= n; i++)
	{
		sum = sum+i;
	}
	printf("sum = %d", sum);	
}