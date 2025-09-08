#include <stdio.h>

int main()
{
	int num ;
	printf("Enter the number\n");
	scanf("%d",&num);
	int new_num =0;
	while(num)
	{
		int temp = num % 10;
		new_num = new_num * 10 + temp;
		num /= 10;
	}
	printf("Reversed number is %d\n",new_num);

	return 0;
}
