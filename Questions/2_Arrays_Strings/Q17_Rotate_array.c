

// Q17_Rotate_array
#include <stdio.h>
#include<string.h>

int main()
{
	int arr[10]= {1,30,4,23,6,5,8,20,10,7};
	int len =sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<len/2;i++)
	{
	    int temp =arr[i];
	    arr[i] = arr[len-i-1];
	    arr[len-i-1] = temp;
	}
	
	for(int i=0;i<len;i++)
	{
	    printf("%d ",arr[i]);
	}
	
}















