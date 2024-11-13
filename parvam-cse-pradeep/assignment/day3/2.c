#include <stdio.h>

int main() {
    int n, i = 0;
    scanf("%d", &n);

    while (i <= n) {
        printf("%d\n", 1 << i); // 1 << i is equivalent to 2^i
        i++;
    }

    return 0;
}
