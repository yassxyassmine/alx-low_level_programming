#include <stdio.h>

int print_last_digit(int n) {
    int last_digit = n % 10;
    if (last_digit < 0) {
        last_digit *= -1;
    }
    printf("%d", last_digit);
    return last_digit;
}

int main(void) {
    int num = 123456789;
    int last_digit = print_last_digit(num);
    printf("\nLast digit of %d is %d\n", num, last_digit);
    return 0;
}
