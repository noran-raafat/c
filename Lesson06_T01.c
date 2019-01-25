#include <stdio.h>

void main (void)
{
	int arr[8];
	int num;	/* number to search for*/
	char i;	
	char npos = 0;	/* number of positions the number exists inside the array */
	
	for( i=0 ; i<8 ; i++)
	{
		printf("\nEnter Element %d: ", i);
		scanf("%d",&arr[i]);

	} 
	
	printf("Enter number to search for: ");
	scanf("%d",&num);
	
	/* loop to search in array */
	for( i=0 ; i<8 ; i++)
	{
		if (arr[i] == num)
		{	
			npos++;   /* update number of positions if number exists */
			printf("Number exists in position %d\n", i);
		}
				
	}

	if ( npos==0)
	{
		printf("Number doesn't exist");
	} 
}