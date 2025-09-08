#include <stdio.h>

int main()
{
    int flag = 1;
	int num;
	printf("Enter the Number\n");
	scanf("%d",&num);

    for(int i=2;i<num;i++)
    {
      if(num%i==0)
      {
          flag =0;
          break;
      }
    }
    
    if(flag)
    {
        printf("%d is a prime number\n",num);
    }
    else
    {
         printf("%d is not a prime number\n",num);
    }
   
}

// Enter the Number
// 4
// 4 is not a prime number
