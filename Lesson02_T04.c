# include <stdio.h>

void main (void)
{
/* 
	 C Program to Check Whether a Character(Entered by user) is an Alphabet or not
*/
	char ch;
	printf("Please enter a character ");
	scanf("%c", &ch);
	if ( ((ch >= 65) && (ch <= 90)) || ((ch >= 97) && (ch <= 122)))
	{
		printf("Character is Alphabet");
	}
	else 
	{
		printf("Character is not Alphabet");
	}
}