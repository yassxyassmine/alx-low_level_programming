#include <stdio.h>

int main() {
    char c;

    // Print lowercase letters
    for (c = 'a'; c <= 'z'; ++c) {
        putchar(c);
    }

    // Print uppercase letters
    for (c = 'A'; c <= 'Z'; ++c) {
        putchar(c);
    }

    // Print newline
    putchar('\n');

    return 0;
}
