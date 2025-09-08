#include <stdio.h>

int main()
{
	int num1 = 3, num2 =5, num3=1;
	int max = (num1>num2) 
	            ? (num1>num3?num1:num3)
	            :(num2>num3?num2:num3);
	          printf(" %d Largest number \n",max);

	return 0;
}
