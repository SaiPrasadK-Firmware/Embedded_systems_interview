//Q50_Function_pointer_callback.c
#include <stdio.h>
int add(int a,int b)
{
    return (a+b);
}

int sub(int a,int b)
{
    return (a-b);
}

int mul(int a,int b)
{
    return (a*b);
}

int Div(int a,int b)
{
    return (a/b);
}

void calculator(int a ,int b, int (*fptr)(int n1,int n2))
{
    printf("Result is %d\n",fptr(a,b));
}
int main()
{
   int a =10,b=10;
   calculator(a,b,add);
   calculator(a,b,sub);
   calculator(a,b,mul);
   calculator(a,b,Div);
   
    return 0;
}
