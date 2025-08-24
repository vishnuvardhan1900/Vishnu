#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
   int arr[] = {1,2,3,4,5,34,5,3,4,};
   int size = sizeof(arr) / sizeof(arr[0]);
   
   int isvisited[size];
   for(int i=0;i<size;i++)
   {
       isvisited[i] = 0;
   }
   int count = 0;
   for(int i=0;i<size;i++)
   {
       count=0;
       if(isvisited[i])
       {
           continue;
       }
       for(int j=0;j<size;j++)
       {
           if(arr[i] == arr[j])
           {
               count++;
              isvisited[j] = 1;
           }
       }
       if(count > 1)
       {
           printf("%d comes on %d times \n", arr[i], count);
       }
   }
}
