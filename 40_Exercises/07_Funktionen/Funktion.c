#include <stdio.h>



int function(int n, int k)
{

int start = 1;
int p1 = 1;
int p2 = 1;
int p3 = 1;

//Fakultät berechnen n!
	for ( int i = start; i <= n; i++)
 	{
	p1 = p1 * i;
	}	
 	
//Fakultät berechnen k!
 	for ( int j = start; j <= k; j++)
 	{
	p2 = p2 * j;
	}	


//Fakultät berechnen (n - k)!
	int Sub = n - k;

	for ( int y = start; y <= Sub; y++)
 	{
	p3 = p3 * y;
	}
// Gesamtfunktion
 	return p1 / ( p2  * p3);
}


int main()
{
int n = 5;
int k = 6;
int Output = 0;

if ( k > 0 && n > 0 && (n - k) > 0)
	{
	Output = function( n, k);
	printf(" Output = %d\n", Output);
	}
if ( k == 0)
	{
	printf(" k  =  0\n");	
	}

if ( n == 0)
	{
	printf(" n  =  0\n");	
	}

if ( ( n - k )  <= 0)
	{
	printf(" k - n  <  0\n");	
	}

	return 0;
}
