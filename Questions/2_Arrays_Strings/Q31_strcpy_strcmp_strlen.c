// Q31_strcpy_strcmp_strlen.c

#include<stdio.h>
#include<string.h>
void str_cpy(char *dest, char *src)
{
	while(*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
}

int str_cmp(char *str1, char *str2)
{
	int flag =0;
	while(*str1 && *str2 )
	{
		if(*str1++ != *str2++ )
		{
		    flag =1;
		}
	}
	return flag;
}

int str_len(char *str)

{
    int len = 0;
    while(*str++)
    {
        
       len++; 
    }
    return len;
}
int main()
{
	char src[]="hello";
	printf(" %d",str_len(src));

	
}
