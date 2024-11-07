#include<stdio.h>
int main(){
    int a=12;
    int *ptr=&a;
    int **ptr2=&ptr;
    printf("%x\n\n\n",*ptr2);
}
