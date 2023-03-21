#include <stdio.h>

int main() {
    int num1 = 1, num2 = 2, nextTerm, i;

    printf("%d, %d, ", num1, num2);

    for (i = 3; i <= 50; i++) {
        nextTerm = num1 + num2;
        printf("%d", nextTerm);

        if (i != 50) {
            printf(", ");
        }

        num1 = num2;
        num2 = nextTerm;
    }

    printf("\n");
    return 0;
}
