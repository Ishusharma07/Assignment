#include <stdio.h>
void main() {
    int n = 7;
    int i = 2;
    int count = 1;

    while(i < n) {
        if(n % i == 0) {
            count = 0;
            break;
        }
        i++;
    }

    if (n<=) {
        printf("This is not a prime number: %d\n", n);
    } else if (count) {
        printf("This is a prime number: %d\n", n);
    } else {
        printf("This is not a prime number: %d\n", n);
    }