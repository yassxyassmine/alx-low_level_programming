#include <stdio.h>
#include <stdlib.h>

int print_last_digit(int n) {
    int last_digit = abs(n) % 10;
    printf("%d", last_digit); 
    return last_digit; 
}

int main() {
    int num = 12345;
    int last_digit = print_last_digit(num);
    printf("\nThe last digit of %d is %d", num, last_digit);
    return 0;
}
