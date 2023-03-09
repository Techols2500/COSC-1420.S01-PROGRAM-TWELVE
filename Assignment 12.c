/*
DESCRIPTION: Programming Excerise Twelve
CLASS: COSC 1420.SO1
AUTHOR: TYLER ECHOLS
DATE: April 2019
*/
#pragma warning (disable:4996) 
 
#include <conio.h>
#include <stdio.h>

#include "BitMacros.h"

int main()
{
	unsigned long num;
	unsigned long new; 
	unsigned int correct;	
	char	x;

	printf("hexidecimal to eight digits: "); 
	scanf("%x", &num); 
	scanf("%c", &x); 
	printf("Enter any number: ");
	scanf("%d", &correct); 
	scanf("%c", &x); 

	
	if (IsOn(num, correct))
	{
		printf("The Swich is on\n");
	}
	else
		printf("Switch off\n"); 

	printf("hexidecimal to eight digits: ");
	scanf("%x", &num);
	scanf("%c", &x);
	printf("Enter any number: ");
	scanf("%d", &correct);
	scanf("%c", &x);
	
	new = TurnOn(num, correct);
	if (new > num)
	{
		printf("Switch is on\n");
	}
	else
		printf("Didn't turn on\n"); 

	printf("hexidecimal to eight digits: ");
	scanf("%x", &num);
	scanf("%c", &x);
	printf("Enter any number: ");
	scanf("%d", &correct);
	scanf("%c", &x);

	new= TurnOff(num, correct);
	if (new < num)
	{
		printf("Switch is off\n");
	}
	else
		printf("Didn't turn on\n");

	printf("hexidecimal to eight digits: ");
	scanf("%x", &num);
	scanf("%c", &x);
	printf("Enter any number: ");
	scanf("%d", &correct);
	scanf("%c", &x);

	new = Toggle(num, correct);
	if (new > num)
	{
		printf("The Swich is on\n");
	}
	else
		printf("Switch off\n");
		 
	printf("Bye, hit any key to continue");
	_getch();
	return 0;
}