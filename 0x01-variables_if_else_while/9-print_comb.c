#include <stdio.h>
int main() {
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = i; j < 10; j++) {
            putchar(i + '0');
            putchar(',');
            putchar(' ');
            putchar(j + '0');
            putchar(' ');
        }
    }

    return 0;
}
