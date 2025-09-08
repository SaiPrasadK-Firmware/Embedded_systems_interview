
#include <stdio.h>

int main()
{

	int num;
	printf("Enter the Number\n");
	scanf("%d",&num);
    int temp = num;
	int count =0;
	while(temp)
	{
	    count++;;
	    temp/=10;
	}
    printf("Total digits in %d is %d\n",num,count);
}


// Enter the Number
// 1234
// Total digits in 1234 is 4
















