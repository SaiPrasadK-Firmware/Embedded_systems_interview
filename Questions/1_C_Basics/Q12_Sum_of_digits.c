
#include <stdio.h>

int main()
{

	int num;
	printf("Enter the Number\n");
	scanf("%d",&num);
    int sum =0;
    int temp  = num;
    while(temp)
    {
        int rem = temp%10;
        sum = sum +  rem;
        temp /=10;
    }
    printf("Total sum of  %d is %d\n",num,sum);
}


// Enter the Number
// 1234
// Total digits in 1234 is 4














