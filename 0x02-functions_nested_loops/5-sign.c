#include <stdio.h>

int print_sign(int n);

int main(void) {
    int num = 10;
    int sign = print_sign(num);
    printf("The sign of %d is %d\n", num, sign);
    
    num = 0;
    sign = print_sign(num);
    printf("The sign of %d is %d\n", num, sign);
    
    num = -5;
    sign = print_sign(num);
    printf("The sign of %d is %d\n", num, sign);
    
    return 0;
}

int print_sign(int n) {
    if (n > 0) {
        putchar('+');
        return 1;
    } else if (n < 0) {
        putchar('-');
        return -1;
    } else {
        putchar('0');
        return 0;
    }
}
