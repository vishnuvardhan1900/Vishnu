//2D array point to array of pointer and pointer to an array
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int **arr;
    int row = 2, col = 3;
    arr = (int **)malloc(row * sizeof(int *));
    for(int i=0;i<2;i++)
    {
        arr[i] = (int *)malloc(col * sizeof(int));
    }
    for(int i=0;i<2;i++)
    {
        for(int j = 0; j<3; j++)
        {
            arr[i][j] = i+j+1;
        }
    }
    int *ptr[2];
    for(int i=0;i<2;i++)
    {
        ptr[i] = arr[i];
    }
    for(int i=0;i<2;i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("%d \n", ptr[i][j]);
        }
    }
    printf("\n");
   int (*ptr2)[3] = (int (*)[3])malloc(row * sizeof(*ptr2));
for(int i=0;i<2;i++)
    {
        for(int j = 0; j<3; j++)
        {
            ptr2[i][j] = arr[i][j];
        }
    }
     for(int i=0;i<2;i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("%d \n", ptr2[i][j]);
        }
    }
    
    
}
