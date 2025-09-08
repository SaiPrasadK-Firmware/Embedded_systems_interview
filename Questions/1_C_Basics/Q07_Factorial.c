#include <stdio.h>

int main()
{
	int num;
	printf("Enter the Number\n");
	scanf("%d",&num);

   int fact = 1;
   for(int i=1;i<=num;i++)
   {
       fact *=i;
   }
   printf("%d factorial is %d\n",num,fact);
   
}

// Enter the Number
// 5
// 5 factorial is 120

