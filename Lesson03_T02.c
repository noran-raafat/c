# include <stdio.h>
/*
c program for simple calculator using functions
*/

double add(double num1, double num2)
{
	return num1 + num2;
}

double minus(double num1, double num2)
{
	return num1 - num2;
}

double mod(long int num1, long int num2)
{
	return num1 % num2;
}

double div(double num1, double num2)
{
	return num1 / num2;
}

double power(double  b, double pow)
{	
	double ans;
	int i;
	ans = b;
	for(i=1; i<pow; i++)
	{
	ans *= b;
	}
	return ans;
}

double mult( double  num1, double num2)
{
	return num1 * num2;
}

void main (void)
{
	double num1; 
	double num2;
	double ans;
	char s;
	
	printf("Calculator supports the following operations: + , - , * , / , %%, ^ \n") ;  
	printf("Please enter first number ");
	scanf("%lf", &num1);
	printf("Please enter operation sign ");
	scanf(" %c", &s);
	printf("Please enter second number ");
	scanf("%lf", &num2);
	
	switch (s)
	{
	case '+' :
	
		ans = add(num1,num2);
		break;

	case '-' :
		
		ans = minus(num1,num2);
		break;
	

	case '%' :
		
		ans = mod(num1,num2);
		break;
	
	case '*':
		
		ans = mult(num1,num2);
		break;
	
	case '/' :
		
		ans = div(num1,num2);
		break;

	case '^':
		
		ans = power(num1,num2);
		break;
	}
	printf("%lf",ans);
	
}