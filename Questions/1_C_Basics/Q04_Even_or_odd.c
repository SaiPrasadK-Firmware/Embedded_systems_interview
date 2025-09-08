#include <stdio.h>

int main()
{
	int num ;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num&1==0)
	{
		printf("Entered number is an ODD number\n");
	} else {
		printf("Entered number is an Even number\n");
	}

	return 0;
}
