//Reverse_words.c
#include <stdio.h>
#include<string.h>
void str_rev(char *start , char *end)
{
    while(start<end)
    {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

void str_rev_words(char *str)
{
    int start =0,end = strlen(str)-1,i;
     str_rev(str, str + end);

    for( i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            str_rev(str+start,str+i-1);
             start = i+1;
        }
       
    }
    str_rev(str+start,str+end);
}
int main()
{
   char str[] = "Hello how are you"; // you are how Hello
   int len =strlen(str)-1;
   int start =0;
str_rev_words(str);
printf("%s",str);
    return 0;
}
