
#include <stdio.h>
#include<math.h>
int main()
{

	int num;
	printf("Enter the Number\n");
	scanf("%d",&num);

	int temp = num;
	int new_num =0;
	int count =0;
	int n =num;
	while(n)
	{
		count++;
		n/=10;
	}

	while(temp)
	{
		int rem = temp%10;
		new_num += pow(rem,count);
		temp/=10;
	}
	if(new_num==num)
	{
		printf("%d is a amstrong number\n",num);
	} else
	{
		printf("%d is not a amstrong number\n",num);
	}
}















