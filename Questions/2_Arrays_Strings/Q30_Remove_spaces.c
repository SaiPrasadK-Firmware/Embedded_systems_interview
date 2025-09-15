// Q30_Remove_spaces.c

#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="hello how are you";
    int j =0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[j++]= str[i];
        
        }
    }
    str[j]='\0';
    printf("%s",str);
}
