
#include <stdio.h>
#include<string.h>

int main()
{
	char str[20]="racecar";
	int len =strlen(str)-1;
	int flag =1;
	for(int i=0;i<len;i++)
	{
	    if(str[i]!=str[len-i])
	    {
	        flag =0;
	        break;
	    }
	}
	if(flag)
	{
	    printf("%s : is palindrome\n",str);
	}
	else
	{
	     printf("%s : is not a palindrome\n",str);
	}

}















