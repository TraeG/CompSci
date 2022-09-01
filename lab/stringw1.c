	#include <stdio.h>
	#include <string.h>

	int main()
{
	char string[100+1];
	int n;

	scanf("%s%d", string, &n);
	printf("[%s] [%d]\n", string, n);

	char removal[n + 1];
	
	for(int i = 0; i < n; i++)
		scanf(" %c", &removal[i]);
	
	printf("[%s]\n", removal);

	int len = strlen(string);
	for(int i = 0; i < len; i++)
	{
		int keep = 1;
		for(int j = 0; j < n; j++)
			if(string[i] == removal[j])
				keep = 0;
		if(keep)
			printf("%c", string[i]);
	}	

	printf("\n");

	return 0;
}
