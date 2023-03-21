#include <stdio.h>

int _islower(int c);

int main(void) {
    char letter = 'a';
    if (_islower(letter)) {
        printf("%c is a lowercase letter\n", letter);
    } else {
        printf("%c is not a lowercase letter\n", letter);
    }
    return 0;
}

int _islower(int c) {
    if (c >= 'a' && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}
