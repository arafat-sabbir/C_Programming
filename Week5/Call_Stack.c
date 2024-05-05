#include <stdio.h>
void world()
{
    printf("World Start\n");
    printf("World End\n");
}
void hi()
{
    printf("Hi Start\n");
    world();
    printf("Hi End\n");
}
int main()
{
    printf("Main Start\n");
    hi();
    printf("Main End\n");
    return 0;
}