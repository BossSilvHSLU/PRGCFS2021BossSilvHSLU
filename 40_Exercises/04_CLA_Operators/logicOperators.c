#include <stdio.h>

int main(int argc, char *argv[] )
{

	// falls nicht drei Argumente erhalten
	if( argc != 3 ) {
		printf("Usage:\n");
		printf("logicOperators Input1 Input2\n");		
	}
	else		
	{	
	printf("Number of input arguments: %d\n", argc );
	
	for( int i = 0; i < argc; i++)
	{
		printf("Argument  %d was %s\n",i,  argv[i] );
	}
	}
	return 0;
	}
	

	

/*
	double e = 2.7182818;
	
	printf("%0.15f", e);
*/
	
