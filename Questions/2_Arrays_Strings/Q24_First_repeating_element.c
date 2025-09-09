

// Q24_First_repeating_element

#include <stdio.h>
#include<string.h>

int  main()
{
    
    int arr[] = {1,2,3,4,2,1,6,7,9,10};
    int len  = sizeof(arr)/sizeof(arr[0]);
    int repeat = 0;
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(arr[i]==arr[j])
            {
                repeat = arr[j];
                break;
            }
        }
    }
    printf("%d is the First_repeating_element\n",repeat);
   
}

















