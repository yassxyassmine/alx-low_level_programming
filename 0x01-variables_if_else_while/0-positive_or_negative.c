#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    
    srand(time(NULL));  // seed the random number generator
    n = rand() % 201 - 100;  // generate a random number between -100 and 100
    
    printf("The number %d is ", n);
    
    if (n > 0) {
        printf("positive.\n");
    } else if (n == 0) {
        printf("zero.\n");
    } else {
        printf("negative.\n");
    }
    
    return 0;
}
