 // Xor swap
#include <stdio.h>
#include <stdint.h>



int main()
{
    uint32_t num1,num2 ;
    printf("Enter the numbers\n");
    scanf("%d %d",&num1,&num2);
    
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    
    printf("%d %d\n",num1,num2);
  
    return 0;
}
