#include <stdio.h>

int _abs(int n) {
    if (n < 0) {
        return -n;
    } else {
        return n;
    }
}

int main(void) {
    int x = -10;
    int y = 5;
    int z = 0;

    printf("%d\n", _abs(x));
    printf("%d\n", _abs(y));
    printf("%d\n", _abs(z));

    return 0;
}
