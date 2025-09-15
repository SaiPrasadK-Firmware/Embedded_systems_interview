// Q34 atoi

#include<stdio.h>
#include<stdint.h>
int user_atoi(char *str)
{
    int num =0,index =0;
	while(str[index] != '\0')
	{
       int digit = str[index]-'0';
       if(digit <0 || digit >9)
       {
           printf("Invalid number\n");
         
       }
       
       num = num * 10 +digit;
       index++;
	}
	return num;
}
int main()
{
	char str[]= "12345";
	printf("%d",user_atoi(str));

}
