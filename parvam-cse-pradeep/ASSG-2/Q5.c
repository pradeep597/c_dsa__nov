#include <stdio.h>
int main() {
    int units, bill = 0;
    scanf("%d", &units);
    if (units <= 100) {
        bill = units * 5;  
    }
    else if (units > 100 && units <= 200) {
        bill = 100 * 5 + (units - 100) * 8;  
    }
    else if (units > 200) {
        bill = 100 * 5 + 100 * 8 + (units - 200) * 10; 
    }
    printf("%d\n", bill);
    return 0;
}