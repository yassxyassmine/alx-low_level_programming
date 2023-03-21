#include <stdio.h>

void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return;
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}

int main() {
    print_times_table(3);
    printf("\n");
    print_times_table(5);
    printf("\n");
    print_times_table(12);
    return 0;
}
