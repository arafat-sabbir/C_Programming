#include <stdio.h>
int sum(){
    int x,y;
    scanf("%d %d",&x,&y);
    return x+y;
}
int main()
{
     printf("%d",sum());
    return 0;
}