#include <stdio.h>

int sum(int x,int y){
    return x+y;
}
int mul(int x,int y){
    return x*y;
}
int minus(int x,int y){
    return x-y;
}
float div(int x,int y){
    return x/y;
}
int main()
{
    int p,y;
    scanf("%d %d",&p,&y);
    printf("Sum is %d\n",sum(p,y));
    printf("Multiply Is %d\n",mul(p,y));
    printf("Minus Is %d\n",minus(p,y));
    printf("Division Is %f\n",div(p,y));
    return 0;
}