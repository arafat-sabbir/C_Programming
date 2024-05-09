#include <stdio.h>

int main() {
    int n; // Change this value to the desired number of rows
    scanf("%d",&n);

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print numbers in decreasing order
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
