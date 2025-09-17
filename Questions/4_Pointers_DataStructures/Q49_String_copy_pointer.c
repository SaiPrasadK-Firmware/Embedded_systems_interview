//Q49_String_copy_pointer
#include <stdio.h>
void str_cpy(char *src, char *dest)
{
    while(*src)
    {
        *dest++ = *src++;
    }
    *dest ='\0';
}
int main()
{
    char str[20] = "Hello World";
    char dest[20] ;
    str_cpy(str,dest);
    printf("%s",dest);

    return 0;
}
