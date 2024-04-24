#include <stdio.h>
#include <string.h>
int main()
{
     char letter[6];
     fgets(letter,8,stdin);
     printf("%s",letter);
    return 0;
}