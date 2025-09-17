// Q36_Reverse_bits.c
// 0000 0000 0000 0000 0000 0000 0000 1010
// 1010 0000 0000 0000 0000 0000 0000 0000 
#include <stdio.h>
#include <stdint.h>
void dec_bin(uint32_t num)
{
    for(int i=31;i>=0;i--)
    {
        printf("%d",num>>i&1);
        if(i%4==0)
        {
            printf(" ");
        }
    }
    printf("\n");
}


uint32_t reverse_bits(uint32_t num) {
    uint32_t result = 0;
    for (int i = 0; i < 32; ++i) {
        result |= ((num >> i) & 1) << (31 - i);
    }
    return result;
}

int main()
{
    uint32_t var = 0xAABBCCDD;
    dec_bin(var);
    
    dec_bin(reverse_bits(var));
    
   
    
    

    return 0;
}
