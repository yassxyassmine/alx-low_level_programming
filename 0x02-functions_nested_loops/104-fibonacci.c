#include <stdio.h>

int main() {
    int a = 1, b = 2, c, count = 0;
    printf("%d, %d, ", a, b);
    while (count < 96) {
        c = a + b;
        printf("%d, ", c);
        a = b;
        b = c;
        count++;
    }
    c = a + b;
    printf("%d\n", c);
    return 0;
}
