// count set bits  
#include <stdio.h>
#include <stdint.h>


int count_set_bits(uint32_t num)
{
    int count=0;
  while(num)
  {
      if(num&1==1)
      {
          count++;
      }
      num>>=1;
  }
    return count;
}

int main()
{
    uint32_t var = 10;
    printf("Number of count set bits in %d  is -> %d\n",var,count_set_bits(var));

    return 0;
}
