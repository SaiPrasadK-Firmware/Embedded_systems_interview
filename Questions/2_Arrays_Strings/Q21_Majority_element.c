

// Majority_element.c

// a element repeted more then n/2 times 


#include <stdio.h>
#include<string.h>

int  main()
{
    int flag =0;
    int arr[] = {3, 3, 4, 2, 3, 3, 5, 3};
    int len  = sizeof(arr)/sizeof(arr[0]);
    
    int freq[100] ={0};
    for(int i=0;i<len;i++)
    {
        freq[arr[i]]++;
    }
     for(int i=0;i<len;i++)
    {
        if(freq[arr[i]]>=(len/2))
        {
            printf("%d is Majority_element in the array\n",arr[i]);
            break;
            flag=1;
        }
    }
    if(flag)
    {
        printf("no  Majority_element found in the array\n");
    }
    
}

















