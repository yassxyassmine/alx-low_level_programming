#include <stdio.h>

int add(int num1, int num2) {
    int result = num1 + num2;
    return result;
}

int main() {
    int a = 5;
    int b = 7;
    int sum = add(a, b);
    printf("The sum of %d and %d is %d\n", a, b, sum);
    return 0;
}
