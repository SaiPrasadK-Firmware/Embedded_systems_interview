#include <stdio.h>

int main()
{
	int num;
	printf("Enter the Number\n");
	scanf("%d",&num);

	int temp = num;
	int	new_num = 0;
	while(temp)
	{
		int rem = temp%10 ;
		new_num = new_num * 10 + rem;
		temp /= 10;
	}

	if(new_num == num)
	{
		printf("%d is a Palindrome number\n",num);
	} else
	{
		printf("%d is not a Palindrome number\n",num);
	}
}















