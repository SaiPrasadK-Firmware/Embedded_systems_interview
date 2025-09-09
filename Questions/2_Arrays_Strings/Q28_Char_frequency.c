

//  char freqency
#include <stdio.h>
#include<string.h>

int  main()
{
    char str[50]="helloworld ";
    char freq[26]={0};
    int len =strlen(str);
    for(int i=0;i<len;i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            freq[str[i] - 'a']++;
    }
 
 
 for(int i=0;i<26;i++)
 {
     if(freq[i]>0)
     {
         printf(" %c ->%d \n",i+'a',freq[i]);
     }
 }
}

















