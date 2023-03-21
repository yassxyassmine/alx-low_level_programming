#include <stdio.h>

int _isalpha(int c);

int main() {
    char c = 'M';
    int result = _isalpha(c);
    printf("%d\n", result);
    return 0;
}

int _isalpha(int c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    } else {
        return 0;
    }
}
