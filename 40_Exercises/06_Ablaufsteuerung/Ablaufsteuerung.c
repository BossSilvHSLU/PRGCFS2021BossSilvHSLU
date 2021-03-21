# include <stdio.h>

int main()
{

int start = 1;
int end = 500;
int mod = 0;
int div = 19;

int end2 = 200;
int div1 = 7;
int div2 = 11;
int div3 = 17;
int mod1 = 0;
int mod2 = 0;
int mod3 = 0;


// Aufgabe 1----------------

printf( " Exercise 1 %d\n");

	for(int i = start; i<= end; i++)
	{
	
	mod = i % div;
		
		if( mod == 0)
		{
		printf( "%d\n", i);
		
		mod = 0;
				
		}
		

	}
	
// Aufgabe 2----------------

printf( " Exercise 2 %d\n");

	for(int i2 = start; i2 <= end; i2++)
	{
	
	mod1 = i2 % div1;
	mod2 = i2 % div2;
	mod3 = i2 % div3;
		
		if( mod1 == 0 && mod2 == 0 )
		{
		printf( " %d and %d : %d\n", div1, div2, i2);
		
		mod = 0;
				
		}
		
		if( mod3 == 0) 
		{
		printf( " %d : %d\n", div3, i2); 
		}

	}


return 0;
}
