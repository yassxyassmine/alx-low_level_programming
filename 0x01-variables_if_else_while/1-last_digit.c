#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    printf("The last digit of %d is %d\n", n, abs(n % 10));
    
    return (0);
}
