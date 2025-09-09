

// Q19 Binary search
#include <stdio.h>
#include<string.h>
int Binary_search(int *arr,int len,int key)
{
   int left =0,right= len-1;
    while(left<=right)
	{
		int mid = left+(right-left)/2;



		if(key==arr[mid])
		{
          return mid;
		} else if(arr[mid]<key)
		{
            	left = mid + 1;

		} else {
			right = mid - 1;

		}
	}
	return -1;
}
int main()
{
	int arr[]= {1, 3, 5, 7, 9, 11, 13};
	int key;
	printf("Enter the key to search\n");
	scanf("%d",&key);
	int len = sizeof(arr)/sizeof(arr[0]);

int index = Binary_search(arr,len,key);
  if(index != -1)
  {
     printf("Element %d found at index %d \n",key,index); 
  }else{
      printf("%d Element not found\n",key);
  }
	
}

















