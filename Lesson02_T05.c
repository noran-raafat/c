# include <stdio.h>

void main (void)
{
/*
	Write C Program to print full pyramid using *
*/	
	char n, s; 
	char str = '*';
	for (n = 1;  n <= 9 ; n+=2)
	{	
		for ( s = 1; s <= n ; s++)
		{
			printf("%c ",str);
		}
		
		printf("\n");
	}
}