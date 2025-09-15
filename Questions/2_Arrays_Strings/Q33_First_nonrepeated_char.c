// Q33_First_nonrepeated_char.c

#include<stdio.h>
#include<stdint.h>
int main()
{
	char str[20];
	printf("Enter the string\n");
	scanf("%s",str);
	int index =0;
	
  int freq[256]={0};
  for(int i=0;str[i]!='\0';i++)
  {
     freq[(uint8_t)str[i]]++;
  }
  
   for(int i=0;str[i]!='\0';i++)
  {
     if(freq[(uint8_t)str[i]] == 1)
     {
         printf("%c",str[i]);
         break;
     }
  }
}
