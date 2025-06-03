#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // 0 and 1 are not prime
    if(n < 2) {
        isPrime = 0;
    }

    // Check from 2 to n-1
    for(i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            isPrime = 0;  // not prime
            break;
        }
    }

    // Print result
    if(isPrime == 1) {
        printf("%d is a Prime number\n", n);
    } else {
        printf("%d is NOT a Prime number\n", n);
    }

    return 0;
}
