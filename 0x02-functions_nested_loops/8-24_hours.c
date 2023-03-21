#include <stdio.h>

void jack_bauer(void);

int main(void) {
    jack_bauer();
    return 0;
}

void jack_bauer(void) {
    int hours, minutes;

    for (hours = 0; hours < 24; hours++) {
        for (minutes = 0; minutes < 60; minutes++) {
            printf("%02d:%02d\n", hours, minutes);
        }
    }
}
