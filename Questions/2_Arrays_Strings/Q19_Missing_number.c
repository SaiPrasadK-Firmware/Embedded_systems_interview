

// Q19 missing number
#include <stdio.h>
#include<string.h>

int main()
{
	int arr[10]= {1,2,4,5,6,7,8,9,10};
    int len = 10;
	int freq[11]={0};
	for(int i=0;i<len;i++)
	{
	freq[arr[i]]=1;
	}
	for(int i=0;i<len-1;i++)
	{
	    if(freq[i]<1)
	    {
	        printf("%d is missing number in the array\n",i);
	        
	    }
	}
	return 0;
	
}















