#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d is The Biggest Number", a);
    } else {
        printf("%d is The Biggest Number", b);
    }

    return 0;
}
