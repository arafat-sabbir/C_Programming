#include <stdio.h>
#include <string.h>
int main()
{
     char ab[100];
     scanf("%s",ab);
     int length = strlen(ab);
     printf("%d from built\n",length);
     int count = 0;
     for(int i = 0;ab[i]!='\0';i++){
        count++;
     }
     printf("%d",count);
    return 0;
}