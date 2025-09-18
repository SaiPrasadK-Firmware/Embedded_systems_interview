// Q51_Static_vs_extern.c
#include <stdio.h>
extern int i ;
void Static()
{
    static int count = 0;
    count++;
    
    printf("%d ",count);
}
int main()
{
  Static();
  Static();
  Static();
  Static();
  printf("\nExter variable define outside scope is %d\n",i);
    return 0;
}
int i=10;  // Definition (storage allocated here)
