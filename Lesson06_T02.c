#include <stdio.h>

/* program that store 8 elements from user in array then display them in ascending order */

void main (void)
{
	int arr[8];   
	int tmp;
	char i, j;	
	
	for( i=0 ; i<8 ; i++)   
	{
		printf("\nEnter Element %d: ", i);
		scanf("%d",&arr[i]);
		
	} 

	for (i =0 ; i<8 ; i++)
	{
		for ( j=0; j<i; j++)
		{
			if (arr[j]>arr[i])
			{
				tmp = arr[i];
				arr[i] = arr[j];	
				arr[j] = tmp;
			}
		}		

	}
	printf("\nThe elements in ascending order: %d",arr[0]);
	for (i = 1; i<8; i++)
	{
		printf(",%d",arr[i]);
	}
}