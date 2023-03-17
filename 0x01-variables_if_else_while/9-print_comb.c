#include <stdio.h>
int main() {
    int i, j;

    for (i = 0; i < 10; i++) {
        putchar(i + '0');
        if (i < 9) {
            putchar(',');
            putchar(' ');
        }
        for (j = i+1; j < 10; j++) {
            putchar(j + '0');
            if (j < 9) {
                putchar(',');
                putchar(' ');
            }
        }
        putchar(' ');
    }

    return 0;
}
