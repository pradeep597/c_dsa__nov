#include <stdio.h>
#define MAX_LEN 100
int main() {
    char ch;
    char st[MAX_LEN];
    char sent[MAX_LEN];
    scanf("%c", &ch);
    scanf("%s", st);
    scanf("\n%[^\n]%*c", sent);
    printf("%c\n", ch);
    printf("%s\n", st);
    printf("%s\n", sent);
    return 0;
}