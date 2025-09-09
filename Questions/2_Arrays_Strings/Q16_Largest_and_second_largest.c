

// Q16_Largest_and_second_largest.c
#include <stdio.h>
#include<string.h>

int main()
{
	int arr[10]= {1,30,4,23,6,5,8,20,10,7};
	int max1 = arr[0];
	int max2 = arr[0];
	
	int len = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<len;i++)
	{
	    if(arr[i]>max1 )
	    {
	        max2 = max1;
	        max1=arr[i];
	        
	    }else if(arr[i]<max1 && arr[i]>max2)
	    {
	        max2 =arr[i];
	    }
	}
	
	printf("Largest num is %d  && second Largest num is %d\n",max1,max2);
}















