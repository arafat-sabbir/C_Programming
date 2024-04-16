#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if (ch >= 'a' && ch <= 'z') {
        char uppercaseLetter = ch-32;
        printf("%c\n", uppercaseLetter);
    } else if (ch >= 'A' && ch <= 'Z') {
        char lowercaseLetter  = ch+32;
        printf("%c\n", lowercaseLetter);
    } else {
        printf("%c is not a letter.\n", ch);
    }

    return 0;
}
