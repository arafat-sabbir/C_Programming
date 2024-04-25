#include <stdio.h>
#include <string.h>
int main()
{
    char arr[10001];
    scanf("%s", arr);
    int count[26] = {0};
    for (int i = 0; i < strlen(arr); i++)
    {
        int num = arr[i] - 'a';
        count[num]++;
    }
    for (int i = 0; i < 26; i++)
    {
       if(count[i]!=0){
         printf("%c - %d\n", i + 'a', count[i]);
       }
    }
    return 0;
}