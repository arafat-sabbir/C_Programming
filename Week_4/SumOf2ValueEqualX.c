#include <stdio.h>
int main()
{
     int n,x;
     scanf("%d",&n);
     int found = 0;
     int arr[n];
          for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
     }
     scanf("%d",&x);
     for(int i =0;i<n-1;i++){
        for(int j =1;j<n;j++){
            if(arr[i]+arr[j]==x){
                printf("Yes");
                found = 1;
                break;
            }
        }
        if(found){
            break;
        }
     }
    if(!found){
        printf("NO");}
    return 0;
}