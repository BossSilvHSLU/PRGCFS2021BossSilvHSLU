#include <stdio.h>

int main()
{

int sum = 0;
int start = 0;
int start4 = 1;
int end = 10;
int value = 40;
int end3 = 15;
int counter = 0;
int end4 = 6;
int value4 = 1;
int value5 = 0;
int tens = 0;



//----------------- Aufgabe 1 

	
	for ( int i = start; i <= end; i ++)
	{	
	sum = sum + i; 
	
	}
		printf("Exercise 01\n");	
	printf("The sum from %d to %d is equal to %d\n", start, end, sum);
	
	sum = 0;
	
	

//------------------Aufgabe 2 

	
	for ( int i = start; i <= end; i = i + 2)
	{	
		sum = sum + i; 
	}
		printf("Exercise 02\n");	
		printf("The sum from %d to %d is equal to %d\n", start, end, sum);
	
	sum = 0;

//------------------Aufgabe 4 

	printf("Exercise 04\n");
	
	for ( int j = start4; j <= end4; j++)
	{	
		value4 = 3 * value4;
		printf("%d\n",value4);	

	}

//------------------Aufgabe 5 

	printf("Exercise 05\n");
	
	for ( int i = start; i <= end; i++)
	{	
		for( int j = start; j <= end; j++)
		{
			
		value5 = tens + j;
		printf(" %d\ ",value5);	
		}

	tens = tens +10;
	printf("\n");

	}
	

//------------------Aufgabe 6 

	printf("Exercise 06\n");
	
	for ( int i = start; i <= end; i++)
	{	
		for( int j = start; j <= end; j++)
		{
			
		value5 = tens + j;
		printf(" %d\ ",value5);	
		}

	tens = tens +10;
	printf("\n");

	}
	
	
	

		
	return 0;
	
	
}
	
	
