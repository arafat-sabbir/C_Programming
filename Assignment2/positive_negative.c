#include <stdio.h>
int main() {
    int num;
    // Read the number from the user
    scanf("%int", &num);
    // Check if the number is positive, negative, or zero
    if (num > 0) {
        for(int i =1;i<=num;i++){
            printf("%d ",i);
        }
    } else {
       for(int i=num;i<=0;i++){
            printf("%d ",i);
        }
    }
    return 0;
}
