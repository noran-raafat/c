#include <stdio.h>

void main (void)
{
	char c;   /* user's choice)

	printf("Welcome!\nPlease choose an option:\n
	1- Enter new player\n2-View Stats\n3-Search");
	scanf ("%d",&c);
	switch case (c)
	case 1:
	{
		/* Go to file 2 (meaning function in file 2) */
		printf("1");
		break;
	}
	case 2: 
	{
		/* Go to file 3 */
		printf("2");
		break;
	}
	case 4: 
	{
		/* Go to file 4 */
		printf("3");
		break;
	}
	default :
	{
		printf("Please enter: 1 or 2 or 3 to choose an option");
	}
	printf("Please choose an option:\n
	1- Enter new player\n2-View Stats\n3-Search");
	scanf ("%d",&c);


