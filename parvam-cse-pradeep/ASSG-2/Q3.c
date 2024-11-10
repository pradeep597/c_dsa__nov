#include <stdio.h>
int main() {
    int age, monthly_income;
    scanf("%d %d", &age, &monthly_income);
    if (age >= 18 && age <= 60) {
        if (age >= 18 && age <= 25 && monthly_income >= 5000) {
            printf("Eligible\n");
        } else if (age >= 26 && age <= 40 && monthly_income >= 10000) {
            printf("Eligible\n");
        } else if (age > 40 && monthly_income >= 15000) {
            printf("Eligible\n");
        } else {
            printf("Not Eligible\n");
        }
    } else {
        printf("Not Eligible\n");
    }   
    return 0;
}