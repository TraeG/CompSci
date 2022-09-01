
	#include <stdio.h>
	#include <string.h>

	#define SIZE 1000005
int main()
{
	//decalre initial variables
	int num = 0;
	char animal[SIZE] = "NULL";
	int tot = 0;
	int animalindex = 0;

	//take initial tokens
	scanf("%s %d", animal, &num);
	int alength = strlen(animal);
	char test[SIZE];

	//to initialize fgets
	fgets(test, sizeof(test), stdin);

	for(int count = 0; count < num; count++)
	{
		//to take first data input 
		fgets(test, sizeof(test), stdin);
		int index = 0;

		//scans through input
	       	for(int testindex = 0; test[testindex]; testindex++)
		{
			//searches for matching characters in test and animal strings. repeats until all characters 
			//match, implying the proper animal is found, or until there is a difference, implying this is
			//not the animal we are searching for
			for(index = testindex; test[index]==animal[animalindex] && animal[animalindex]; index++)
			{
				animalindex++;
			}
			if((index-testindex) == alength)
				tot++;	
			animalindex = 0;
		
		//search returns to initial index location and continues for length of test string		
		}
		
		//result is printed
		printf("%d \n", tot);
		tot=0;		

		//loop is repeated until the inputted count is reached
	}
	return 0;
}
