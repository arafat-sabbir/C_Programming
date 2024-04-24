#include <stdio.h>
int main()
{
     int x;
     scanf("%d",&x);
     int arr[x];
     for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
     }
     int start = 0;
     int end = x-1;
     while (start<=end)
     {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--; 
     }
     
    for(int i=0;i<x;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}