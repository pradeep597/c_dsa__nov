#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    // Edge case for numbers less than 2
    if (n <= 1) {
        printf("No\n");
        return 0;
    }

    int is_prime = 1; // Assume the number is prime
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            is_prime = 0; // n is divisible by i, so it's not prime
            break;
        }
    }

    if (is_prime) {
        printf("Yes\n");  // The number is prime
    } else {
        printf("No\n");   // The number is not prime
    }

    return 0;
}
