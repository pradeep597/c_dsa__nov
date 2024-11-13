#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    
    // Handle the case when n is 0, as it has 1 digit
    if (n == 0) {
        count = 1;
    } else {
        // While loop to divide the number by 10 and count the digits
        while (n != 0) {
            n /= 10;
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}
