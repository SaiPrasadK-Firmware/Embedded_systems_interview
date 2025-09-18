//Q54_2D_array_pointer.c
#include <stdio.h>
#include <stdlib.h>
int main()
{
int Row,col;
int var = 1;
printf("Enter the Row and col\n");
scanf("%d %d",&Row,&col);
int **arr = malloc(Row*sizeof(int*));


for(int i=0;i<Row;i++)
{
    arr[i]=malloc(col*sizeof(int));
}

for(int i=0;i<Row;i++)
{
    for(int j=0;j<col;j++)
    {
        arr[i][j]= var++;
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}

free(arr);

    return 0;
}
