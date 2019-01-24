#include <stdio.h>

void main (void)
{
	int arr[8];
	int num;
	char i;
	char npos = 0;
	for( i=0 ; i<8 ; i++)
	{
		printf("\nEnter Element %d: ", i);
		scanf("%d",&arr[i]);

	} 
	
	printf("Enter number to search for: ");
	scanf("%d",&num);
	
	for( i=0 ; i<8 ; i++)
	{
		if (arr[i] == num)
		{	
			npos++;
			printf("Number exists in position %d\n", i);
		}
				
	}
	if ( npos==0)
	{
		printf("Number doesn't exist");
	} 
}