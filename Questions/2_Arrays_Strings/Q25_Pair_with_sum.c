

// Pair_with_sum
#include <stdio.h>
#include<string.h>

int  main()
{
    
    int arr[] = {1,2,3,4,2,1,6,7,9,10};
    int len  = sizeof(arr)/sizeof(arr[0]);
    int key_sum = 15;
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(arr[i]+arr[j]==key_sum)
            {
                printf("arr[%d] + arr[%d] = %d\n",i,j,key_sum);
                break;
            }
        }
    }
    
   
}

















