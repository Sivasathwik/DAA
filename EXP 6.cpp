#include <stdio.h>
#include <string.h>

void printReverse(char *str) {
    if (*str == '\0')
        return;
    else {
        printReverse(str + 1);
        printf("%c", *str);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    printf("Reversed string: ");
    printReverse(str);
    printf("\n");

    return 0;
}
