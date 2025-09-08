#include <stdio.h>

int main()
{

	int num;
	printf("Enter the Number\n");
	scanf("%d",&num);

	int a = 0, b = 1,next;
	printf("%d %d ",a ,b);
	for(int i =2;i<num;i++)
	{
	    next = a+b;
	    a = b;
	    b = next;
	    printf("%d ",next);
	}


}


// Enter the Number
// 10
// 0 1 1 2 3 5 8 13 21 34 
