	#include <stdio.h>
	#include <string.h>

	#define SIZE 10005
	int main()
{
	char input1[SIZE];

	scanf("%s", input1);
	printf("[%s] \n", input1);

	char input2[SIZE];
	
	scanf("%s", input2);
	printf("[%s]\n", input2);

	int leninput1 = strlen(input1);
	int leninput2 = strlen(input2);
	int count = 0;

	for(int i = 0; i < leninput1; i++)
	{
		int tempi = i;

		for(int j = 0; j < leninput2 && input2[j]; j++)
		{
			if(input1[tempi] == input2[j])
			{
				tempi++;
				printf("COUNT = %d, TEMPCOUNT = %d, i=%d,j= %d\n", count, tempi-i, i,  j);
				if((tempi-i) > count)
					count = tempi-i;
			}
			else
				tempi = i;
		}
	}	

	printf("%d \n", count);

	return 0;
}
