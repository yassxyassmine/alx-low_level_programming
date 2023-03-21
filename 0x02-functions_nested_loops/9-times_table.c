#include <stdio.h>

void times_table(void)
{
    int i, j, result;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            result = i * j;
            if (j == 0) {
                printf("%d", result);
            } else if (result < 10) {
                printf(",  %d", result);
            } else {
                printf(", %d", result);
            }
        }
        printf("$\n");
    }
}

int main(void)
{
    times_table();
    return 0;
}
