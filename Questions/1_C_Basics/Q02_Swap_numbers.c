#include <stdio.h>
int main()
{
  int a =10, b =11;
  a = a ^  b;
  b = b ^ a;
  a = a ^ b ;
  printf("After swap %d %d\n",a,b);
}
