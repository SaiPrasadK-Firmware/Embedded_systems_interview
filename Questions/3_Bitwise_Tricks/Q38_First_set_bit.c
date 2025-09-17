 
#include <stdio.h>
#include <stdint.h>

int first_set(uint32_t num)
{
    int pos =0;
    while(num)
    {
        if(num&1==1)
        {
            break;
        }
        pos++;
        num>>=1;
    }
    return pos;
}

int main()
{
    uint32_t num = 32;
    printf("%d in the first_set bit is in the %d position \n",num,first_set(num));
   
    return 0;
}
