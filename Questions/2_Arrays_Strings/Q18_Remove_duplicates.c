

// Q18_Remove_duplicates
#include <stdio.h>
#include<string.h>

int main()
{
	int arr[10]= {1,33,99,1,30,5,4,20,5,7};

	int len = sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<len; i++)
	{
		for(int j=i+1; j<len; j++)
		{
			if(arr[i]==arr[j])
			{

				for(int k=j; k<len; k++)
				{
					arr[k]=arr[k+1];
				}

				len--;
			}
			else
		    {
			j++;
		   }

	}
}



	for(int i=0; i<len; i++)
	{
		printf("%d ",arr[i]);
	}

}





// other way



// Q18_Remove_duplicates
#include <stdio.h>
#include<string.h>

int main()
{
	int arr[10]= {1,33,99,1,30,5,4,20,5,7};
    int len = sizeof(arr)/sizeof(arr[0]);
	int freq[100]={0};
	for(int i=0;i<len;i++)
	{
	 if(!freq[arr[i]])
	 {
	     printf("%d ",arr[i]);
	     freq[arr[i]]=1;
	 }
	}
	
}
















