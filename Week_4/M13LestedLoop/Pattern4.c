#include <stdio.h>
int main()
{
     int n,s,k=1;
     scanf("%d",&n);
     s=n-1;
     for(int i = 1;i<=(n*2);i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for (int j = 1;j<=k;j++){
            printf("*");
        }
        printf("\n");
        if(i<=n-1){
            s--;
        k+=2;
       }else if(i>n){
        s++;
        k-=2;
       }
     }
    return 0;
}