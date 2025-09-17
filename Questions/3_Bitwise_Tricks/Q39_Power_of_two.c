 // power of two
#include <stdio.h>
#include <stdint.h>

int power_of_2(uint32_t num)
{
    int flag =0;
   if((num&(num-1))==0)
   {
       flag =1;
  
   }
   return flag;
}

int main()
{
    uint32_t num ;
    printf("Enter the number\n");
    scanf("%d",&num);
    
   if((power_of_2(num)))
   {
       printf("%d is power of two\n",num);
   }else
   {
        printf("%d is not power of two\n",num);
   }
    return 0;
}
