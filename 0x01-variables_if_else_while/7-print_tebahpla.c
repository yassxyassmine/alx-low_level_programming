#include <stdio.h>
int main() {
    int i;

    for (i = 25; i >= 0; i--) {
        putchar(i + 'a');
    }

    putchar('\n');

    return 0;
}
